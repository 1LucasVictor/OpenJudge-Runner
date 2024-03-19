#include<stdio.h>
int main(void){
	int a,b,c,x,y,z;
	scanf("%d %d %d",&a,&b,&c);
	
	z=0;
	for(x=a;x<=b;x++){
		if(c%x==0){
			z+=1;
		}else{
			z+=0;
		};
		
		
	}
	printf("%d\n",z);
	return 0;
}
 