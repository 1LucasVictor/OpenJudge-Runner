a,b,c;main(n){scanf("%d",&n);while(n--){scanf("%d %d %d",&a,&b,&c);a*=a;b*=b;c*=c;(a+b-c&&a+c-b&&b+c-a)?puts("NO"):puts("YES");}exit(0);}