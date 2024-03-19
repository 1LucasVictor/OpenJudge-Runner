#include<stdio.h>

int main(){
	int ans = 0;
	double n,d;
	scanf("%lf %lf",&n,&d);
	double x,y;
	for (double i=0;i<n;i++){
		scanf("%lf %lf",&x,&y);
		if (x*x+y*y<=d*d){
			ans++;
		}
	}
	
	printf("%d",ans);
}