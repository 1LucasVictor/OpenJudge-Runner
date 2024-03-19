#include <stdio.h>
 
int main(void)
{
 
  int a, b, r, tmp;


  scanf("%d", &a);
 
  scanf("%d", &b);
 
  /* 自然数 a > b を確認・入替 */
  if(a<b){
    tmp = a;
    a = b;
    b = tmp;
  }
	r = a % b; 
	
	while(r!=0){
    a = b;
    b = r;
    r = a % b;
  }

	
	
	
	
	printf("%d",b);
	return 0;

}
