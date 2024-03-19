#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
     int a_start, a_finish;
     int b_start, b_finish;
     scanf("%d%d%d%d\n", &a_start, &a_finish, &b_start, &b_finish);
     int vec[101] = {0};

     for (int i = a_start; i < a_finish; ++i)
          ++vec[i];

     for (int i = b_start; i < b_finish; ++i)
          ++vec[i];

     int sum = 0;

     for (int i = 0; i < 100; ++i){
          if (vec[i] == 2)
               ++sum;
     }
     printf("%d\n", sum);


     return 0;
}
