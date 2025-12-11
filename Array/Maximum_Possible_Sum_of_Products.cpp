long long MaxSum(long long int A[], long long int B[], long long int N) {
    sort(A,A+N);
    sort(B,B+N);
    long long sum=0;
    for(int i =0;i<N;i++){
        sum+=A[i]*B[i];
    }
    return sum;
    
}