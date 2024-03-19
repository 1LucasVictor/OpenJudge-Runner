#include <stdio.h>

int main(void){
	int n;
	int i;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	int a, b, c, d;

	scanf("%d %d %d", &a, &b, &c);

	if (a<b){
		d = b;
		b = a;
		a = d;
 	}
 	if (a<c){
 		d = c;
 		c = a;
 		a = d;
 	}
 	if (a*a == b*b + c*c)
 		printf("YES\n");
 	else
 		printf("NO\n");	
 	}


return 0;


}