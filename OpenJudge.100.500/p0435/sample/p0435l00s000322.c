#include<stdio.h>
#include<math.h>
int main()
{float x, y,distance, d, n;
int count=0;
if(scanf("%f %f", &n, &d) == 2)
{

    while(n!=0)
{
    if(scanf("%f %f", &x, &y) == 2)
    {
        distance = sqrt((x*x)  +   (y*y) );
if(distance<=d)
{count++;}
    }

n--;
}
}

printf("%d", count);
return 0;
}
