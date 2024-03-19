main(){
    int a,b,c;

    while(~scanf("%d%d%d",&a,&b,&c)){
        printf("%d\n",b+c > a ? b+c-a : 0);
    }
}
