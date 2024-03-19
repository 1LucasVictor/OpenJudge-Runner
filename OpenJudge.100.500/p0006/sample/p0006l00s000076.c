#include <stdio.h>
main(){
  int n,x=100000,y,i;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    x*=1.05;
    y=x/1000;
    if(x-y*1000==0) x=y*1000;
    else x=y*1000+1000;
  }

  printf("%d\n",x);
return 0; 
}