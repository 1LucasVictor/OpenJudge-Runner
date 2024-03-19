int main(){
    int N;
    int A[200010];
    int B[200010];
    scanf("%d",&N);
    int i;
    for(i=2; i<=N;i++){
        scanf("%d", &A[i]);
    }
    int j;
    for(i=2; i<=N;i++){
        B[A[i]]++;
    }
    for(i=1; i<=N;i++){
        printf("%d\n",B[i]);
    }
}