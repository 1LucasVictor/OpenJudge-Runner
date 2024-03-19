#define MAX 200000
long N,i,j,x,max=-20000000000,R[MAX];
main(){
    for(scanf("%ld",&N);i<N;scanf("%ld", &R[i++]));
    for(i=1;i<N;i++){
        for(j=0;j<i;j++){
            x=R[i]-R[j];
            if(x>max)max=x;
        }
    }
    printf("%ld\n", max);
}