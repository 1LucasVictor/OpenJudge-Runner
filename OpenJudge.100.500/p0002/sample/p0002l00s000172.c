a,b,c;main(n){
    char m[2][8]={"NO","YES"};
    for(scanf("%d",&n);n--;){
        scanf("%d %d %d",&a,&b,&c);
        printf("%s\n",m[!(a*a+b*b-c*c)]);
    }
    return 0;
}