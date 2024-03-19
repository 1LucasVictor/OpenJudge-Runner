#include <stdio.h>
#include <math.h>

double RoundOff(double src, int keta);

int main(void)
{
	int a,b,c,d,e,f,i;
	double ans[2];
	
	while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF)
	{
		ans[1] = (double)((a*f-d*c)/(-1*d*b+a*e));
		ans[0] = (double)((c-b*ans[1])/a);
		
		for(i=0;i<2;i++)
		{
			printf("%.3f ",RoundOff(ans[i],4.0));
		}
		printf("\n");
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