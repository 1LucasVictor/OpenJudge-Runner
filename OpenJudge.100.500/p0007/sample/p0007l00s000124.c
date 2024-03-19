#include<stdio.h>

int main(){
 int n,i,j,k,count;
 while(scanf("%d",&n)!=EOF){
  for(i=0,count=0;i<10;i++)
   if(i<=n)
   for(j=0;j<10;j++)
    if((i+j)<=n)
     for(k=0;k<10;k++)
      if((i+j+k)<=n)
       if(n-i-j-k<10) count++;
  printf("%d\n",count);
 }
 return 0;
}