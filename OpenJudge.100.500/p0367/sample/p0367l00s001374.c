#include <stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);

	int i;
	int j=0;

	for(i=a;i<=b;i++){
		if(c%i==0){
			j++;
		}
	}
	printf("%d\n",j);

	return 0;
}