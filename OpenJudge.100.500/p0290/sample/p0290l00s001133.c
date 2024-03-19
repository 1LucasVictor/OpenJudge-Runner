x,i,t;
a(x){
    if(x==2)return 1;
    if(x<2||x%2==0)return 0;
    for(i=3;i<=sqrt(x);i+=2){
        if(x%i==0)return 0;
    }
    return 1;
}
main(){
    for(scanf("%d",&x);~scanf("%d",&x);t+=a(x));
    printf("%d\n",t);
}