#include <stdio.h>
 
int main(void){
	
  int a,b,c;
  
  scanf("%d %d %d",&a,&b,&c);
  
  if(a+b+c == 17 && a % 5==0 && b % 5==0){
  printf("YES\n");
  } else if(a+b+c == 17 && a % 5==0 && c % 5==0){
  printf("YES\n");
  } else if(a+b+c == 17 && b % 5==0 && c % 5==0){
  printf("YES\n");
  } else {
  printf("NO\n");
  }
  return 0;
}