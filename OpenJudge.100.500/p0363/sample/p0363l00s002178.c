#include <stdio.h>

int main(void){

int a,b,c,x,y,z;

scanf("%d %d %d",&a,&b,&c);

if(a<b){
	
	x=a;
	
	y=b;
	
}
	else{
		
		x=b;
		
		y=a;
		
	};
	
	if(b<c){
		
		z=c;
		
	}
	else{
		
		if(a<c){
			
			y=c;
			
			z=b;
			
		}
		else{
			
			x=c;
			
			y=a;
			
			z=b;
			
		};
	};
		
		printf("%d %d %d\n",x,y,z);
		
		return 0;
		
	};