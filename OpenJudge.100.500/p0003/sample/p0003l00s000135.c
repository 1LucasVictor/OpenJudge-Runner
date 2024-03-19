#include <stdio.h>
 
int main(void)
{
    int a,b,c,d,e,f;
    float x,y;
     
    while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f) != EOF){
             
    x = (float)(c*e-f*b)/(a*e-d*b);
    y = (float)(c*d-f*a)/(b*d-e*a);
     
    if(x == -0){
        x = 0;
    }
    if(y == -0){
        y = 0;
    }
    printf("%.3f %.3f\n",x,y);
    }
     
    return(0);
}