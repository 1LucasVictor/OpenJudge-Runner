#include<stdio.h>

int main(void){
double x1,y1, x2,y2, x3,y3, x4,y4;
int n,i;
double h1,h2;

scanf("%d",&n);

for(i=1;i<=n;i++){
	scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1, &x2,&y2, &x3,&y3, &x4,&y4);

	h1=(y2-y1)/(x2-x1);
	h2=(y4-y3)/(x4-x3);
	if ( h1==h2 ){
		printf("YES\n");
	}else {
		printf("NO\n");
	}
}

return 0;
}