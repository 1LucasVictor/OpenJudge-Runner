#include<stdio.h>

int main()
{
  int i,s,count1,l,count2=0,n=0;
  scanf("%d",&l);
  while(n < l){
    scanf("%d",&s);
    n++;
    count1=0;
    if(s==2)count2++;
    if(s%2==0) continue;
    
    
    for(i = 3;i<=s;i+=2){
      if(s%i==0) count1++;
    }
    if(count1==1)count2++;
  }
  printf("%d\n",count2);
}