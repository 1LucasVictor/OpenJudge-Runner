#include<stdio.h>
int main(){
int a, b, r, i;
char n;
for(i=0; ;i++){
scanf("%d %c %d", &a, &n, &b); 
if(n!='?'){
if (n=='+'){ 
r=a+b;}
else{
	if(n=='-'){
	r=a-b;}
	else{
		if(n=='*'){
		r=a*b;}
		else{
		r=a/b;}
	}
}
}
else break;
printf("%d\n", r);
}
return 0;
}