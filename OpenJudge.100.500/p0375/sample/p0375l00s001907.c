n;
main(i){
    for(scanf("%d",&n);i<=n;i++){
        i%3==0||i/10==3||i%10==3?printf(" %d",i):0;
    }
    puts("");
}