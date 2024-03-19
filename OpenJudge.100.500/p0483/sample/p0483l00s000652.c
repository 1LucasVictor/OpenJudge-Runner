#include<stdio.h>
int main(){
int a[3];
int n,b=0;
for(n=0;n<3;n++){
  scanf("%1d",&a[n]);
  if(a[n]==7)b=1;}
  
if(b==0)printf("No");
 else printf("Yes");

return 0;}