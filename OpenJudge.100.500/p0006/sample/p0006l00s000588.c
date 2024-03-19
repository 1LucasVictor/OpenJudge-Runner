#include <stdio.h> 
int main(){
  int n,i,sum=100000;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    sum*=1.05;
    if(sum%1000>=1)sum=sum-(sum%1000)+1000;
}
printf("%d\n",sum);
return 0;   
}