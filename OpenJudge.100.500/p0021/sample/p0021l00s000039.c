#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265358979323

//int calc1(float a,float b,float c,float d,float e,float f,float *x,float *y);
//void quick(int *,long long,long long);
//int comp(char *a,char *b);

int main(){
	
	int n,i,a,min,wa,t;

	scanf("%d",&n);
	while(n!=0){
		scanf("%d",&a);
		wa=a;
		t=a;
		if(a<0)
			min=a;
		else
			min=0;
		for(i=1;i<n;i++){
			scanf("%d",&a);
			wa+=a;
			if(wa-min>t)
				t=wa-min;
			if(wa<min)
				min=wa;
		}
		printf("%d\n",t);
		scanf("%d",&n);
	}
	return 0;
}