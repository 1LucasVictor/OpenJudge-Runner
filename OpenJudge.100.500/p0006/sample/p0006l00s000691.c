#include <stdio.h>
main(){
  int n,x=100000,y,i;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    x*=1.05;
  }
  y=x/10000;
  if(x-y*10000==0) x=y*10000;
  else x=y*10000+10000;
  printf("%d\n",x);
return 0; 
}