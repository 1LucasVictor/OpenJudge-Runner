#include <stdio.h>

int main(void){

  long long a, c, i, ii;
  long long aa = 0;
  long long aaa = 0;
  long long b = 10;

  for(i = 0; i < 1; i--){
    scanf("%lld", &a);
    if(a == 0) break;
    c = a;
    while(c > 9){
      c -= 10;
    }
    aaa += c;
    for(ii = 0; ii < 1; ii--){
      if(a > 9){
	aa = a / b;
	if(aa < 1) break;
	while(aa > 9){
	  aa -= 10;
	}
	aaa += aa;
	b *= 10;
      } else break;
    }
    printf("%lld\n",aaa);
    aaa = 0;
    b = 10;
  }
  return 0;
}