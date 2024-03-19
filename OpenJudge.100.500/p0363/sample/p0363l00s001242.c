#include<stdio.h>


int main(){
	int a,b,c;
	int d[3];
		
	scanf("%d %d %d",&d[0],&d[1],&d[2]);
	
	
		if(d[0] > d[1]){
			a = d[1];
			d[1] = d[0];
			d[0] = a;
		}
		if(d[1] > d[2]){
			b = d[2];
			d[2] = d[1];
			d[1] = b;
		}if(d[0]>d[1]){
			c = d[1];
			d[1] = d[0];
			d[0]=c;
		}
			
		printf("%d %d% d\n",d[0],d[1],d[2]);
	//juge(x,d,e);


return 0;
}


	