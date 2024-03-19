#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
     if(a>=c)
     {
         if(d<=a)
            printf("0");
         if(d>a)
         {
             if(d>=b)
                printf("%d",b-a);
              if(d<b)
                printf("%d",d-a);
         }
     }
     else
     {
         if(b<=c)
            printf("0");
         if(b>c)
         {
             if(b>=d)
                printf("%d",d-c);
              if(b<d)
                printf("%d",b-c);
         }
     }

 return 0;
}
