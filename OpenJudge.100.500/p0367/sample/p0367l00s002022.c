#include<stdio.h>
int main(void){
	int a;
	int b;
	int c;
	int amari;
	int kazu=0;
	int i;

	scanf("%d %d %d",&a,&b,&c);

	for (i = a; i < b;i++) {
		amari = c%i;
		if (amari == 0) {
			kazu++;
		}
	}
	printf("%d\n",kazu);
	return 0;
	}