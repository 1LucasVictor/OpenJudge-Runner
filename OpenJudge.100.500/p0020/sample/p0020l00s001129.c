//AOJ 0021
#include <stdio.h>
int main(){
    double x1,y1,x2,y2,x3,y3,x4,y4;
    double m1,m2;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
if(x2-x1==0||x3-x4==0){
if(x1-x2==x3-x4)puts("YES");
else puts("NO");
}else{
    	m1=(y2-y1)/(x2-x1);
    	m2=(y4-y3)/(x4-x3);
    	if(m1==m2)puts("YES");
    	else puts("NO");
}
    	}
	return 0;
}