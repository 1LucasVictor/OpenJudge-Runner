#include <stdio.h>
int main(){
int i,j,a=0;
scanf("%d",&i);
if(i==1){
	printf("Yes");
}
if(2<=i && i<=100){
for(j=2; j<=9; j++){
	if((i%j)==0){
	if((i/j)<10){
		a++;
}}}}
if(a>0) printf("Yes");
else printf("No");
return 0;
}