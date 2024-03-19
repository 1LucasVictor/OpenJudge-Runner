#include<stdio.h>
 int main()
 {
     int x,a,b,i;
     scanf("%d %d %d",&x,&a,&b);
      if(x>=a)
      {
          if(b>a)
            printf("safe\n");
          if(b<=a)
            printf("delicious\n");
      }
      if(x<a)
        printf("dangerous\n");
  return 0;
 }
