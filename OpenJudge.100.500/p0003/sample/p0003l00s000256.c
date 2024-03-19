#include<stdio.h>

int main()
{
    double a,b,c,d,e,f,x,y,x1,y1,z,z1,result;

    while( scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f) != EOF ) {
	    x=(a*e)-(b*d);
	    y=(a*e)-(b*d);
	    if (x!=0 && y!=0)

	     {

	      x1=((c*e)-(b*f))/x;
	      y1=((a*f)-(c*d))/y;
	     printf("%.3lf %.3lf\n",x1,y1);}
	    else
	      printf("error");
    }
	    return 0;
}