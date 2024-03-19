#include<stdio.h>


int main(){

	char c;
	while((c=getchar())!=EOF){
	if(c>64&&c<91)
		putchar(c+32);
	else if(c>96&&c<123)
		putchar(c-32);
	else putchar(c);}
//	printf("\n");
	return 0;
}
