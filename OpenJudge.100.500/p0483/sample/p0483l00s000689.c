#include <stdio.h>

void main(){
  int i,n,flag=0;
  scanf("%d",&n);
  for(i=0;i<3;i++){
  	if((n%10) == 7) 
      flag=1;
  	else 
      n = n/10;
    if(flag==1)
      break;
  }
  if(flag==1)
    printf("Yes\n");
  else
    printf("No\n");
}