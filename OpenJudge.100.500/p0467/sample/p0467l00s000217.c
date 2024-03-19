#include<stdio.h>
int main(){
	int a,b,c,k;
  scanf("%d %d %d %d",&a,&b,&c,&k);
  if(a+b>=k){
    printf("%d",a);
    return 0;
  }
  else
    printf("%d",a-c);
}