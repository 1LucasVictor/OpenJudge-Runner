#include<stdio.h>
#include<string.h>

int main(){
	int i,n,d;
	double r = 100;

	scanf("%d", &n);
	for(i=0; i<n; i++){
		r = r*1.05;
		d = (int)r;
		if(r-d>=0.001){
			r = d + 1;
		}else{
			r = d;
		}
		d = (int)r;
	}
	printf("%d\n", d*1000);
	return 0;
}