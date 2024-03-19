#include<stdio.h>
int main(){
	int a,b,i;
	while(scanf("%d%d",&a,&b)!=EOF){
		i=0,a+=b;
		while(a!=0){
			a/=10;
			++i;
		}
		printf("%d\n",i);
	}
	return 0;
}
