#include<stdio.h>
#include<math.h>



int main()
{
   int A, B, C, p, q;

    scanf("%d %d %d", &A, &B, &C);

   p = B + C;
   if(A>=p){

    printf("0");
   }
   else if(A<p){
      q = -(A -p);
     printf("%d\n", q);
   }


    return 0;
}
