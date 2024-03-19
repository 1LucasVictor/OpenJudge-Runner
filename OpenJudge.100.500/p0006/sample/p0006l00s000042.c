#include <stdio.h>
#define debt 100000
 
int main(void){

	int a = debt; 
	int i,n;            

	scanf("%d",&n);
	for(i=0;i<n;i++){
		a *= 1.05;
		if(a%1000!=0)
			a+=1000;
		a=a/1000*1000;
	}
	printf("%.0d\n",a);
	return 0;
}