#include<stdio.h>

int main(){
	int a,b=0,i;
	scanf("%d",&a);
	for(i=1;i<4;i++){
      if(a%10==1){
        b+=1;
      }
      a=a/10;
    }
  printf("%d\n",b);
  return 0;
}
  