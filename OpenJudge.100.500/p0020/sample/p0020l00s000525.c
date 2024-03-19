#include<stdio.h>
#include<math.h>

int main(void)
{
        int n = 0, i = 0, flag1 = 10, flag2 = 0;
        double x1 = 0, x2 = 0, x3 = 0, x4 = 0;
        double y1 = 0, y2 = 0, y3 = 0, y4 = 0;
        double a12 = 0, a34 = 0;

        scanf("%d",&n);

        for(i = 0; i < n; i++)
        {
                scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);


                if( x1 - x2 == 0)
                {
                        flag1 = 1;
                }
                else if( y1 - y2 == 0)
                {
                        flag1 = 2;
                }
                else if(x1-x2 != 0.0 && y1-y2 != 0)
                {
                        a12 =(y1-y2)/(x1-x2);
                }


                if(x3-x4 == 0)
                {
                        flag2 = 1;
                }
                else if(y3-y4 == 0)
                {
                        flag2 = 2;
                }
                if(x3-x4 != 0.0 && y3 - y4 != 0)
                {
                        a34 =(y3-y4)/(x3-x4);
                }


                if(flag1 == flag2)
                {
                        printf("YES\n");
                }
                else if(fabs(a12 - a34) < 0.00001&& (flag1 == 10 && flag2 == 0))
                {
                        printf("YES\n");
                }
                else
                {
                        printf("NO\n");
                }
                flag1 = 10;
                flag2 = 0;


        }
        return 0;
}