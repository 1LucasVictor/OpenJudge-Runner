       #include <stdio.h>

       

       int main(void) {

           int X, A, B;

         

           scanf("%d %d %d" , &X, &A, &B);

    

           int D = A + X;



           if(A >= B) {

              printf("delicious");

           }else if(D >= B){

              printf("safe");

           }else{

              printf("dangerous");

           }

    }