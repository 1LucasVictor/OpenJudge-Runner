a,b,c;main(n){
    char m[2][8]={"NO","YES"};
    for(scanf("%d",&n);n--;){
        scanf("%d %d %d",&a,&b,&c);
        a=!!(a*a+b*b-c*c)+!!(a*a-b*b+c*c)+!!(a*a-b*b-c*c)<3;
        printf("%s\n",m[a]);
    }
    return 0;
}