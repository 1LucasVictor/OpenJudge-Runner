 #include<stdio.h>
 int main(void)
 {
     int A,B;

     scanf("%d%d",&A,&B);

     if(B%A==0) printf("%d\n",B/A);
     else       printf("%d\n",B/A+1);

     return 0;
 }

