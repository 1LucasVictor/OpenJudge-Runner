#include<stdio.h>
int main()
  { 
    int H,A,s,i,count=0;
    scanf("%d %d",&H,&A);
    s=H-A;
    while(s>0)
      { 
       for(i=1;s>0;i++)
        { 
          s=H-i*A;
          count++;
         } 
      } 
  if(H-A<=0)
    printf("1");
  else
    printf("%d",count);
  return 0;
  }
    
      
  
