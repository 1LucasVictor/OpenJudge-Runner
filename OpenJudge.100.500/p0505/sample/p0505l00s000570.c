#include <stdio.h>
int main(void){
int a,b,n;
int sum = 0;
scanf("%d %d",&a,&b);
for(int i = 0;i < b;i++){
	scanf("%d",&n);
	sum += n;}
if(sum < a)
	printf("No");
else
	printf("Yes");
}