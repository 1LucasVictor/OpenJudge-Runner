long i,j,x,max=-2000000000,N,R[200000];
main(){
    for(scanf("%ld",&N);i<N;scanf("%ld",&R[i++]));
    for(i=1;i<N;i++){
        for(j=0;j<i;j++){
            x=R[i]-R[j];
            if(max<x)max=x;
        }
    }
    printf("%ld\n",max);
}