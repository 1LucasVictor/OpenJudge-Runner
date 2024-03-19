#include<stdio.h>

int main(){
	char a='A';
	char b='B';
	char c='C';

scanf("%c%c%c",&a,&b,&c);

if(a==b && a==c && b==c){
	printf("No");
}
else{
	printf("Yes");
}
return 0;
}