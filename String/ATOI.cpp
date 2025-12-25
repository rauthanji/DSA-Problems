class Solution {
public:
    int myAtoi(string s) {

        int n=s.length();
        int i=0;
        int sign =1;
        while(i<n && s[i]==' ')i++;
        if(s[i]=='-' || s[i]=='+'){
            if(s[i]=='-'){
                sign=-1;
            }
            i++;
        }
        while(i<n && s[i]=='0')i++;

        return itoo(s,i,n,sign,0);
    }
    int itoo(string &s,int i, int n, int sign,long ans){
        if(i>=n || !isdigit(s[i])) return (int)(sign*ans);

        ans = ans * 10 + (s[i]-'0');

        if(sign == 1 && ans>INT_MAX) return INT_MAX;
        if(sign == -1 && -1*ans<INT_MIN) return INT_MIN;

        return itoo(s,i+1,n,sign,ans);
    }
};