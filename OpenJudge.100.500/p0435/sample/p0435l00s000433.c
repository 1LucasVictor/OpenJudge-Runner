
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(void) {
	int n,d,count=0;
	scanf("%d%d",&n,&d);
	long int x[n],y[n];
	for(int i=0;i<n;i++){
		scanf("%ld%ld",&x[i],&y[i]);
	}
	for(int i=0;i<n;i++){
		long long int x2 = pow(x[i],2);
		long long int y2 = pow(y[i],2);
		double ans = (double)sqrt(x2+y2);
		if((double)ans<=(double)d){
			count++;
			//printf("%ld %ld=>%lld*%lld=%lf\n",x[i],y[i],x2,y2,ans);
		}
	}
	printf("%d\n",count);
}
