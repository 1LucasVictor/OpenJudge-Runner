#include<stdio.h>
#include<math.h>
int main()
{float x, y,distance, d, n;
int count=0;
scanf("%f %f", &n, &d);
while(n!=0)
{scanf("%f %f", &x, &y);
distance = sqrt((x*x)  +   (y*y) );
if(distance<=d)
{count++;}
n--;
}printf("%d", count);
return 0;}
