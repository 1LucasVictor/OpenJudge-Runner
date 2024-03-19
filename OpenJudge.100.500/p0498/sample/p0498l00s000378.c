#include <stdio.h>
int main(){
	int x,y,z;
	scanf("%d",&x);
	z=x/2+1;
	y=x/2;
	
	if (x%2!=0){
		printf("%d",z);
	}
	else  
	{
		printf ("%d",y);
	}
	
	return 0;
}