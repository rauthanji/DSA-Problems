  int search(int n, int arr[]) {
        map<int,int> mpp;
        for(auto it:arr){
            mpp[it]++;
        }
        for(auto it:mpp){
            if(it.second==1){
                return it.first;
            }
        }
        return -1;
    }
};