#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int l, r;
	scanf("%d%d", &l, &r);
	
	int ser=2019;
	int agr, boon, cannon;
	for(int i=l; i<=r-1; i++){
		for(int j=i+1; j<=r; j++){
			agr = i%2019;
			boon = j%2019;
			cannon = (agr*boon)%2019;
			if(ser>cannon) ser = cannon;
		}
	}
	
	printf("%d", ser);
	
	
	return 0;
}