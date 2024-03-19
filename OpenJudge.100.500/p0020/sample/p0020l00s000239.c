#include<stdio.h>
int main(){
	double ax,ay,bx,by,cx,cy,dx,dy,tax,tay,tcx,tcy;
	int n,a;
	scanf("%d",&n);
	for(a=0;a<n;a++){
		scanf("%lf %lf",&ax,&ay);
		scanf("%lf %lf",&bx,&by);
		scanf("%lf %lf",&cx,&cy);
		scanf("%lf %lf",&dx,&dy);
		tax=ax-bx;
		tay=ay-by;
		tcx=cx-dx;
		tcy=cy-dy;
		if(tcy*tax==tcx*tay){printf("YES\n");}
		else{printf("NO\n");}
	}
	return 0;
}