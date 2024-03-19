#include<stdio.h>

int main(){
 int i,n,c;
 scanf("%d",&n);
 for(i=100000,c=0;c<n;c++){
  i=(double)i*1.05;
  if(i%1000!=0) i=(int)(i/1000)*1000+1000;
 }
 printf("%d\n",i);
 return 0;
}