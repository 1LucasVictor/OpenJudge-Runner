#include <stdio.h>
int main(){
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if(c<b){
		if(d>b)printf("%d\n",b-c);
		else printf("%d\n", d-c);
	}
	else printf("0\n");
	return 0;
}