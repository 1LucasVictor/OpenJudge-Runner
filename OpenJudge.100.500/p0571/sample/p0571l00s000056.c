int main(void)
{
  int n,a,b,x;
  scanf("%d %d %d",&n,&a,&b);
  x=n*a;
  if(x>b) printf("%d",b);
  else printf("%d",x);
  return 0;
}