a,b,c,t;
main(){
    for(scanf("%*d");~scanf("%d%d%d",&a,&b,&c);t=0){
        t+=a*=a;t+=b*=b;t+=c*=c;
      puts(t-2*a&&t-2*b&&t-2*c?"NO":"YES");
    }
}