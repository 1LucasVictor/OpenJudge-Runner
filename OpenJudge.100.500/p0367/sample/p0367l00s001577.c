#include<stdio.h>
int main(void){
	int a,b,c,i,cout=0;
	scanf("%d %d %d",&a,&b,&c);
	for(i=a;i<=b;i++){
		if(c%i==0){
			cout++;
		}
	}
	printf("%d\n",cout);
	return 0;
}
