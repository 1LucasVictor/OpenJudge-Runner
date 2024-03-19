#include <stdio.h>

int main(){
  int big,small,i,j;
  scanf("%d%d",&big,&small);
  if(small>big){
    i=big;
    big=small;
    small=i;
  }
  j=big%small;
  while(j!=0){
    big=small;
    small=j;
    j=big%small;
	 }
    printf("%d\n",small);
    
  return 0;
}


