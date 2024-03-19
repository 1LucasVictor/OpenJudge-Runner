//ABC174_B
#include <stdio.h>
#include <math.h>

int main(){
	int n,d;
	int x[100005],y[10005];
//	long long int dd=0;
	double z=0;
	int cnt=0;
	
	scanf("%d %d",&n,&d);
//	dd = d * d;
//printf("%d",d,dd);
	for(int i=0;i<n;i++){
		scanf("%d %d",&x[i],&y[i]);	
//		if(x[i]<0)	x[i] = x[i] *-1;
//		if(y[i]<0)	y[i] = y[i] *-1;
		
		z = sqrtl((x[i]*x[i])+(y[i]*y[i]));
//test
//printf("x[i] = %d , y[i] = %d , z = %lf \n",x[i],y[i],z);
		if(z<=d)	cnt = cnt +1;
	}
	
	printf("%d",cnt);
	
	return 0;
}
