#include<stdio.h>

int main(void)
{
  int n,i,s,t;
  
  scanf("%d",&n);
  
  s=n;
  
  for(i=0;i<3;i++){
    s=s%10;
    if(s==7){
      t++;
    }
  }
  
  if(t>=0)
    puts("Yes");
  
  else
    puts("No");
  
  return 0;
}
