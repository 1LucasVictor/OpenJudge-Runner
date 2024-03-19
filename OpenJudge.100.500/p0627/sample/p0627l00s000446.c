    #include<stdio.h>
    #include<stdlib.h>
     
    int main(void) {
      int a,b;
      scanf("%d %d",&a,&b);
      if (a + b >= a - b && a + b >= a * b) {
        printf("%d",a + b);
      } else if(a - b >= a + b && a - b >= a * b) {
        printf("%d",a - b);
      } else if(a * b >= a + b && a * b >= a - b) {
        printf("%d",a * b);
      }
      return 0;
    }