#include <stdio.h>
int main(void)
{
    double x1,y1,x2,y2,x3,y3,x4,y4,AB,CD;
    int n,i;
    
    scanf("%d",&n);
    {
        for(i=0;i<n;i++)
        {
            scanf("%lf",&x1); scanf("%lf",&y1);
            scanf("%lf",&x2); scanf("%lf",&y2);
            scanf("%lf",&x3); scanf("%lf",&y3);
            scanf("%lf",&x4); scanf("%lf",&y4);
            
            AB=(y2-y1)/(x2-x1);
            CD=(y4-y3)/(x4-x3);
            
            if(AB==CD) printf("YES\n");
            else printf("NO\n");
        }
    }
    
    return 0;
}


