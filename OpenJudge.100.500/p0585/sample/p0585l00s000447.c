int main(void)
{
  int A,B,T;
  A=0;
  B=0;
  T=0;
  
  scanf("%d %d %d",&A,&B,&T);
  
  int m = (int) T/A;
  
  printf("%d",B*m);
}