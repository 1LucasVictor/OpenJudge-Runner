k;a,b;x;main(){scanf("%d%d%d",&a,&b,&k);x=a+b;while(k){--x;if(a%x==0&&b%x==0)k--;}printf("%d\n",x);}