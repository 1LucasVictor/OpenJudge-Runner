#include<stdio.h>
int main()
{
  int k=0,a=0,b=0;
  int i=0;
  
  scanf("%d",&k);
  scanf("%d %d",&a,&b);
 
  i=1;
  while(k<=a)
  {
    if(a<k*i){
      break;
    }
    i++;
  }
  if(k*i<=b){
    printf("OK\n");
  }
  else{
    printf("NG\n");
  }
  return 0;
}