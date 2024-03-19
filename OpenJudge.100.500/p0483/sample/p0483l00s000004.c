#include<stdio.h>

int main(void)
{
  int n,i,s,t;
  
  scanf("%d",&n);
  
  for(i=0;i<3;i++){
    s=n%10;
    if(n==7){
      t++;
    }
  }
  
  if(t>=0)
    puts("Yes");
  
  else
    puts("No");
  
  return 0;
}