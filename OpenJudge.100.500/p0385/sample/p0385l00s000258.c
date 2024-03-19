main(){
    long long a=0,t=0;
    for(;scanf("%d",&a),a!=0;printf("%lld\n",t))
        for(t=0;a>0;a/=10){
            t+=a%10;
        }
}