#include <stdio.h>
 
int main(void)
{
 
int a, b, c, d;


printf("");
scanf("%d %d %d %d", &a, &b, &c, &d);
    
if(0<=a&&a<b&&b<=100&&0<=c&&c<d&&d<=100)
{
    if(c<b)
    {
        printf("%d", b-c);
    }
    else if(a<d)
    {
        if(b<c||d<a)
        {
            printf("%d", 0);
        }
        else
        {
            printf("%d", d-a);
        }
    }
    else if(a<c&&d<b)
    {
        if(b<c||d<a)
        {
            printf("%d", 0);
        }
        else
        {
        printf("%d", d-a);
        }
    }
    else if(c<a&&b<d)
    {
        if(b<c||d<a)
        {
            printf("%d", 0);
        }
        else
        {
           printf("%d", d-a);
        }
    }
    
}
else
{
    printf("error");
}
    
 
    
    
  return 0;
}
