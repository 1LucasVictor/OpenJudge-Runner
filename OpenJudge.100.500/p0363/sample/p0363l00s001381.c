#include <stdio.h>
int main(void){
	
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int i,z;
	for(i=0;i<3;i++){
		if(a>b){
			z=a; a=b; b=z;
		}else if(b>c){
			z=b; b=c; c=z;
		}
	}
	printf("%d %d %d\n",a,b,c);
	
	return 0;
}
