#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265358979323

//int calc1(float a,float b,float c,float d,float e,float f,float *x,float *y);
//void quick(int *,long long,long long);
//int comp(char *a,char *b);

int main(){
	
	int i,num;
	int a[10];
	
	num=0;
	while(scanf("%d",&i)!=EOF){
		if(i==0){
			num--;
			printf("%d\n",a[num]);
		}else{
			a[num]=i;
			num++;
		}
	}
	//for(i=0;i<=1000000000;i++);
	return 0;
}