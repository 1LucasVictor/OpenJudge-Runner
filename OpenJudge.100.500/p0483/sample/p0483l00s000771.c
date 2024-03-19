#include <stdio.h>
void main (){
  int i,j=0,k;
  scanf("%d",&k);
  for(i=0;i<3;i++){
    if(k%7==0){
      j=1;
    }
    k%=10;
  }
  if(j==1)printf("Yes");
  else printf("No");
  
}