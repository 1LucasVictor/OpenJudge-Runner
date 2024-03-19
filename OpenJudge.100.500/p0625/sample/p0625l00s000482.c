#include<stdio.h>
int main(void)
{
  int a,b;
  char str[8];
  
  fgets(str,sizeof(str),stdin);
  sscanf(str,"%d%d",&a,&b);
    
  if((a < 9)&&(b < 9))
  {
    puts("Yay!");
  }else
  {
    puts(":(");
  }
  
  return 0;
}