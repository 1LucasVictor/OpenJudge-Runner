#include <stdio.h>
int main(){
  int a, b, i, key;
  scanf("%d %d",&a,&b);
  while(1){
    if(a >= b){
      if(a % b == 0){
	printf("%d\n",b);
	break;
      }
      a = a % b; 
    }
    else if(a <= b){
      if(b % a == 0){
	printf("%d\n",a);
	break;
      }
      b = b % a;
    }
  }
  return 0;
}