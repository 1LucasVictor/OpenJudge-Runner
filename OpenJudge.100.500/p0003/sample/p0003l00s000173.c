#include <stdio.h>

int main(void)
{
	double a,b,c,d,e,f,x,y,a2,b2,c2,d2,e2,f2,tmp1,tmp2;
	
	
	while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF)
	{
		//	ax + by = c
		//	dx + ey = f
		
		//xの係数を同じにしyを求める
		b2=b*d;
		c2=c*d;	//(b2)y=(c2)
		e2=e*a;
		f2=f*a;	//(e2)y=(f2)
		tmp1=b2-e2;
		tmp2=c2-f2;	//(tmp1)y=(tmp2)
		y=tmp2/tmp1;
		//yの係数を同じにしxを求める
		a2=a*e;
		c2=c*e;	//(a2)x=(c2)
		d2=d*b;
		f2=f*b;	//(d2)x=(f2)
		tmp1=a2-d2;
		tmp2=c2-f2;	//(tmp1)x=(tmp2)
		x=tmp2/tmp1;
		
		
		printf("%.3f %.3f\n",x,y);	//勝手に四捨五入する
	}
	return 0;
}