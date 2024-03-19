#include<stdio.h>
#include<math.h>

int main(){
	double x1,x2,x3,x4,y1,y2,y3,y4;
	double a1=0.0,a2=0.0;
	int n,i;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		
		a1=(y1-y2)/(x1-x2);
		a2=(y3-y4)/(x3-x4);
		
	if( a1==a2 || ( x1==x2 && x3==x4) || ( y1==y2 && y3==y4) )printf("YES\n");
	else printf("NO\n");
		a1=0;
		a2=0;
	}
return 0;
}