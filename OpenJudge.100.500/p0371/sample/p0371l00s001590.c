/*
 * ITP1_4D.c
 *
 *  Created on: 2016/05/28
 *      Author: TakaakiShogaki
 */
#include<stdio.h>

int main(){
	int n,i,x,min,max;
	double sum=0;
	min=1000000;
	max=-1000000;

	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&x);
		if(min>x)
			min=x;
		if(max<x)
			max=x;
		sum+=x;
	}
	printf("%d %d %.f\n",min,max,sum);

return 0;
}