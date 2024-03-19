#include <stdio.h>
#include <math.h>

double RoundOff(double src, int keta);

int main(void)
{
	int a,b,c,d,e,f;
	double x,y;
	
	while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF)
	{
		y = (double)((a*f-d*c)/(-1*d*b+a*e));
		x = (double)((c-b*y)/a);
		
		printf("%.3f %.3f\n",RoundOff(x,3),RoundOff(y,3));
	}
	
	return 0;
}

double RoundOff(double src, int keta)
{
	// 10^keta 
	src *= pow(10.0, (double)(keta-1));
	if(src>0){
		// (int)(num+0.5) cast
		src = (int)(src+0.5);
	}
	else{
		// (int)(num-0.5)
		src = (int)(src-0.5);
	}
	// 10^-keta
	src /= pow(10.0, (double)(keta-1));
	
	return src;
}