#include<stdio.h>

int main(void){
	int a,b,c,d;
	int tmax,tmin;

	scanf("%d %d %d %d",&a,&b,&c,&d);

	if(a<c){
		tmin =c;}
	else{
		tmin =a;}
	if(b<d){
		tmax =b;}
	else{
		tmax =d;}
	if(tmax-tmin>0){
	printf("%d",tmax-tmin);}
	else{
	printf("0");}
	return 0;
}
