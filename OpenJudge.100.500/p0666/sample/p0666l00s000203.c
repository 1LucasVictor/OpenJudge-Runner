 #include<stdio.h>
 int main(void)
 {
     double X,A,B;

     scanf("%lf%lf%lf",&X,&A,&B);

     if(A>=B) printf("delicious\n");
     else if(B-A<X+1) printf("safe\n");
     else if(B-A>=X+1) printf("dangerous\n");

     return 0;
 }

