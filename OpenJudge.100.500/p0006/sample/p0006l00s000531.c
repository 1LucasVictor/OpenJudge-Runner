#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265358979323

//void quick(int *,long long,long long);
//int comp(char *a,char *b);

int main(){
	
	int i,j;
	
	scanf("%d",&i);
	j=100000;
	while(i>0){
		j=(float)j*1.05-0.1;
		j=(j/1000+1)*1000;
		i--;
	}
	printf("%d\n",j);
	//for(i=0;i<=1000000000;i++);
	return 0;
}