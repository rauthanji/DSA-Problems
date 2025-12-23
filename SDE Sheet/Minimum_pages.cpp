class Solution {
  public:
    bool isValid(vector<int> &arr,int k, int n,int maxx){
        int sum=0;
        int stu = 1;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>maxx){
                stu++;
                sum=arr[i];
            }
            if(stu>k){
                return false;
            }
        }
        return true;
    }
    int findPages(vector<int> &arr, int k) {
        int start = *max_element(arr.begin(),arr.end());
        int maxx=start;
        int n = arr.size();
        if(k>n) return -1;
        int sum=0;
        for(auto it:arr){
            sum+=it;
        }
        int end=sum;
        int res=-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(isValid(arr,k,n,mid)==true){
                res= mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return res;
    }
};