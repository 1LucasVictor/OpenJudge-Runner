#include<stdio.h>
int main()
{
      int A,B,x,y,z;

      scanf("%d %d",&A, &B);

       x = A + B;

       y = A - B;

       z = A * B;

       if(x > y && x > z){

              printf("%d\n",x);

       //       printf("%d+%d=%d, %d-%d=%d and %dx%d=%d. The largest among them is %d.\n",A,B,x,A,B,y,A,B,z,x);


       }


       else if(y>x && y>z){

             printf("%d\n",y);

          //  printf("The largest is %d-(%d)=%d.\n",A,B,y);

       }


       else

            printf("%d\n",z);

       return 0;

}
