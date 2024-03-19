#include <stdio.h>

main(){
  int x,y,i,j;
  
  scanf("%d %d",&x,&y);
  if(x>=y){
    j=x%y;
    for(i=j;i>0;i--){
      if(y%i == 0 && j%i == 0){
	printf("%d\n",i);
	return 0;
      }
    }
  }
  
  else{
    j=y%x;
    for(i=j;i>0;i--){
      if(x%i == 0 && j%i == 0){
	printf("%d\n",i);
	return 0;
      }
    }
  }
}