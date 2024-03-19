#include<stdio.h>

int main(void){
   int n,i,a=0,b=0; 
   int c[1000]={0};
  
 while(1){
  scanf("%d",&n); 
    if(0 < n <= 100)
      break;
  }
  
    for(i=0;i<n;i++){
    
    while(1){
     scanf("%d",&c[i]); 
      if(0 < c[i] <= 1000)
        break;
    }
    }
  for(i=0;i<n;i++)    
    if(c[i]/2==0){   
      if(c[i]/3==0 ||c[i]/3==0 ) a++;}   
  else b++;  
  
  if(n-b==a) puts("APPROVED");   
  else puts("DENIED");  
  return 0;
}