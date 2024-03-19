#include <stdio.h>

int main(int argc, const char * argv[])
{
    float x, y;
    int a, b, c, d, e, f;
    
    while (scanf("%d %d %d %d %d %d",&a, &b, &c, &d, &e, &f) != EOF){
        y = (a*f - c*d) / (a*e - b*d);
        x = (c - b*y) / a;
        printf("%.3f %.3f\n",x ,y);
    }
    return 0;
}