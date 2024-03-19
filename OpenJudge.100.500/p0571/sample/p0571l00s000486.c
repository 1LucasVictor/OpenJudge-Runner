#include <stdio.h>
#include <math.h>
//----//
int n, a, b;
int main(){
  	scanf("%d%d%d", &n, &a, &b);
  	if(n * a < b) printf("%d", n*a);
  	else printf("%d", b);
	return 0;
}