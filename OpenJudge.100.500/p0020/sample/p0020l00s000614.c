#include <stdio.h>
#include <stdlib.h>
 
int main( void )
{
    unsigned char i = 0;
    unsigned char num = 0;
     
    float x1,y1 = 0;
    float x2,y2 = 0;
    float x3,y3 = 0;
    float x4,y4 = 0;
     
    scanf("%d",&num);
     
    for(i=0; i<num; i++)
    {
        scanf("%f %f %f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
         
        if( ( (x1-x2)/(y1-y2) ) == ( (x3-x4)/(y3-y4) ) )
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
