#include<stdio.h>
int main(void){
  int a,b;
  int aki=0,cnt=0;
  scanf("%d %d",&a,&b);
  if(b>=a){
  	while(aki < b){
    	cnt++;
    	aki += a-1;
    	if(aki+1 >= b)break;
  	}
  }
  printf("%d\n",cnt);
  return(0);
}