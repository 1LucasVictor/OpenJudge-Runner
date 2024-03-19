#include <stdio.h>

int main(void){

int a,b,c,x,y,z;

scanf("%d %d %d",&a,&b,&c);


	if(a<b&&b<c){
		
	x=a;
	y=b;
	z=c;
		
	};
	
	if(c<a&&a<b){
		
		x=c;
		y=a;
		z=b;
		
	};
	
	if(c<b&&b<c){
		
		x=a;
		y=c;
		z=b;
		
	};
	
	if(b<a&&a<c){
		
		x=b;
		y=a;
		z=c;
	};
	
if(b<c&&c<a){
		
		x=b;
		y=c;
		z=a;
	};
	
	if(c<a&&b<a){
		
		x=c;
		y=b;
		z=a;
	};
	
	printf("%d %d %d\n",x,y,z);
	
	return 0;
	
	};