#include<stdio.h>



int main(void)
{
        int n = 0, i = 0, count=0;
        double x1 = 0, x2 = 0, x3 = 0, x4 = 0;
        double y1 = 0, y2 = 0, y3 = 0, y4 = 0;
        long a12 = 0, a34 = 0;

        scanf("%d",&n);

        for(i = 0; i < n; i++)
        {
                scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

                if(x1-x2 != 0.0 && y1-y2 != 0)
                {
                        a12 =(y1-y2)/(x1-x2)*10000;
                }
                else if( x1-x2 == 0)
                {
                        a12 = 0.0;
                }
                else if( y1-y2 == 0)
                {
                        a12=99.99999;
                }


                if(x3-x4 != 0.0 && y3 - y4 != 0)
                {
                        a34 =(y3-y4)/(x3-x4)*10000;
                }
                else if(x3-x4 == 0)
                {
                        a34 = 0.0;
                }
                else if(y3-y4 == 0)
                {
                        a34 = 99.99999;
                }
                if(a12 == a34)
                {
                        printf("YES\n");
                }
                else
                {
                        printf("NO\n");
                }

        }
        return 0;
}