#include<stdio.h>
int main(void)
{ 
  int n[100];
  int i,a,b,count=0;

  scanf("%d",&a);
  
  for(i=0;i<a;i++){
    scanf("%d",&b);
    n[i]=b;
  }
  for(i=0;i<a;i++){
    if(n[i]%2==0){
      if(n[i]%3==0||n[i]%5==0){
      }
      else {
        count+=1;
      }
    }
  }
   if(count>0){
     printf("DENIED");
   }
  else {
    printf("APPROVED");
  }
  
  return 0;
}