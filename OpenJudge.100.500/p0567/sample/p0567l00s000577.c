int main(void)
{
  int a,b,c,x;
  scanf("%d %d %d",&a,&b,&c);
  x=a-b;
  if(c>x) printf("%d",c-x);
  else return 0;
}