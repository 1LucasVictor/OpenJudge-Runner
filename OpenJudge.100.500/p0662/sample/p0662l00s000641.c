#include <stdio.h>
int main(){
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if(a>=c){
		if(a>=d)printf("0\n");
		else{
			if(b<=d)printf("%d\n",b-a);
			else printf("%d\n", d-a);
		}
	}
	else{
		if(b<=c)printf("0\n");
		else{
			if(b<=d)printf("%d\n",b-c);
			else printf("%d\n", d-c);
		}
	}
	return 0;
}