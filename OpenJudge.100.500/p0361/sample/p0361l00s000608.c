#include<stdio.h>
 
int main()
{
int t;
scanf("%d", &t);
printf("%d:%d:%d\n", t / 3600, (t / 60) % 60, t % 60);
 
return 0;
} 
