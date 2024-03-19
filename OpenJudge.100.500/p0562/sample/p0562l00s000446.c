 #include<stdio.h>
 int main(void)
 {
     int A,B;

     scanf("%d%d",&A,&B);
   
     if(B%A==0){
       if(A*B/A-(B/A-1)>=B)
          printf("%d\n",B/A);
     }
   
     else{
       if(A*(B/A+1)-B/A>=B)
          printf("%d\n",B/A+1);
     }

     return 0;
 }
