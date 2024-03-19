#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int max(int a,int b){return a>b?a:b;}
int min(int a,int b){return a<b?a:b;} 
int main(void)
{
  int n,a,b,c;
  
  scanf("%d",&n);
  
  a=n/100;
  b=(n-a*100)/10;
  c=n-a*100-b*10;
  
  if(c==2||c==4||c==5||c==7||c==9)
    printf("hon");
  if(c==0||c==1||c==6||c==8)
    printf("pon");
  if(c==3)
    printf("bon");
    
}