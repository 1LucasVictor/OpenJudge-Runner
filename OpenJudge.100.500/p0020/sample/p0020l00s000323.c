#include <stdio.h>
int main()
{
	double x1,x2,x3,x4,y1,y2,y3,y4;
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		if((y2-y1)*(x3-x4)-(x2-x1)*(y3-y4)==0)	puts("YES");
		else 									puts("NO");
	}
	
	return 0;
}