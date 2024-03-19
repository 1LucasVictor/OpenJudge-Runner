#include<stdio.h>
#include<math.h>
int main(){
	int t,d,c=0;
	scanf("%d %d",&t,&d);
	while(t--){
		int x,y;
		scanf("%d %d",&x,&y);
		double result=sqrt(x*x + y*y);
		if(result<=d)
		 c=c+1;
	}
	printf("%d",c);
}