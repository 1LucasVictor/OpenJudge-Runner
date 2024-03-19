#include<stdio.h>
char A, B, T, a, b;
int main(void){
	A=getchar();
	a=1; b=0;
	T=getchar();
	if(T==A){a++;}else if(b==0){B=T; b=1;}else if(b>0 && T==B){b++;}
	T=getchar();
	if(T==A){a++;}else if(b==0){B=T; b=1;}else if(b>0 && T==B){b++;}
	T=getchar();
	if(T==A){a++;}else if(b==0){B=T; b=1;}else if(b>0 && T==B){b++;}
	if(a==2 && b==2){
		puts("Yes");
	}else{
		puts("No");
	}
}

