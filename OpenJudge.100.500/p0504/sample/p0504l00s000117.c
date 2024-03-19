#include<stdio.h>

int main(){
 int i,H,A;
  scanf("%d %d",&H,&A);
	while(H>0){
    	H=H-A;
     	++i;
    }
  printf("%d\n",i);
  return 0;
}