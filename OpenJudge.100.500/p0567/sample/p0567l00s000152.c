int main(void)
{
  int a,b,c;
  
  scanf("%d%d%d", &a, &b, &c);
  
  for(int i=0; i<(a-b); i++)
  {
    if(c==0)
      break;
    c--;
  }
    printf("%d", c);
  
  return(0);
}