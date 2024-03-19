#include<stdio.h>
int a = 0, c;
int main(){
	while((c=getchar()) != EOF)a |= (c=='7');
	puts(a?"Yes":"No");
}
