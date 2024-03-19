#include<stdio.h>
#include<math.h>

int main(){

	int a,b,c;
	int i,j=0;

	scanf("%d %d %d",&a,&b,&c);

	for(i=a;i<=b;i++){
		if(c%i==0){
			j+=1;
		}
	}

	printf("%d\n",j);

	return 0;
}