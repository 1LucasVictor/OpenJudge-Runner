#include<stdio.h>
int main(void){
	int a,b,c;
	int i,j;
	int count=0;
	scanf("%d %d %d",&a,&b,&c);
		for(i=1;i<=c;i++){
			if((c%i==0) && (a<=i) && (i<=b)){
				count++;
			}
		}
	printf("%d\n",count);
	return 0;
}