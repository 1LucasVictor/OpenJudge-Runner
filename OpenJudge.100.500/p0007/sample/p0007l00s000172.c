#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265358979323

//void quick(int *,long long,long long);
//int comp(char *a,char *b);

int main(){
	
	int a,b,c,d,n,k;
	
	while(scanf("%d",&n)!=EOF){
		k=0;
		for(a=0;a<=9&&a<=n;a++)
			for(b=0;b<=9&&a+b<=n;b++)
				for(c=0;c<=9&&a+b+c<=n;c++)
					if(n-a-b-c<=9)
						k++;
		printf("%d\n",k);
	}
	//for(i=0;i<=1000000000;i++);
	return 0;
}