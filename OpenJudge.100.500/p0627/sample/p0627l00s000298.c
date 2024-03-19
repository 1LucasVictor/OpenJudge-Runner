a;b;main(){
  scanf("%d%d",&a,&b);
  a+b>a-b?a+b>a*b?printf("%d",a+b):printf("%d",a*b):a-b>a*b?printf("%d",a-b):printf("%d",a*b);
  return 0;}