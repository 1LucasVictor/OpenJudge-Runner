#include<stdio.h>
int main(){
       int x,y,z,a,b,c,d,f;
	scanf("%d",&x);
	//if(x%500!=0){
		y=x%500;
		z=x-y;
		a=z/500;
		b=a*1000;
		c=y%5;
		d=y-c;
		f=b+d;
		printf("%d",f);
		return 0;

}