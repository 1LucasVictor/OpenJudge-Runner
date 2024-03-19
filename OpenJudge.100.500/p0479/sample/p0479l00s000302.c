int main(){
    int N;
    int A[200000];
    int B[200000];
    int a;
    scanf("%d",&N);
    int i;
    for(i=2; i<=N;i++){
        scanf("%d", &A[i]);
    }
    a=0;
    int j;
    for(i=1; i<=N;i++){
        for(j=i+1; j<=N; j++){
            if(i==A[j]){
                B[i]=B[i]+1;
            }
        }
    }
    for(i=1; i<=N;i++){
        printf("%d\n",B[i]);
    }
}