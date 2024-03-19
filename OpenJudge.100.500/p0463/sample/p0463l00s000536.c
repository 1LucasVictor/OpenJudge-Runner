
#include <stdio.h>

int main()
{
    int N;
    scanf("%d",& N);

   int last_number = N % 10;

   if (last_number == 2 || last_number == 4 || last_number == 5 || last_number == 7 || last_number == 9){
       printf("hon");
   }
   else if (last_number == 0 || last_number == 1 || last_number == 6 || last_number == 8) {
       printf("pon");
   }
   else if (last_number == 3) {
       printf("bon");
   }
return 0;
}