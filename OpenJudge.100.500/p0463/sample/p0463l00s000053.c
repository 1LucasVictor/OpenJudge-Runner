#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	n%=10;
	char*s;
	switch(n){
		case 3:
			s="bon";
			break;
		case 0:
		case 1:
		case 6:
		case 8:
			s="pon";
			break;
		default:
			s="hon";
	}
	puts(s);
}