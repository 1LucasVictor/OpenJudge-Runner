#include<stdio.h>

int main()
{

 int i, j, k;

 int a, b, c;

 while(scanf("%d %d", &a, &b), a > 0){

   c = 0;

  for(i = 1; i <= a; ++i){

   for(j = i + 1; j <= a; ++j){

    for(k = j + 1; k <= a; ++k){

     if(i + j + k == b){

        ++c;

      }

    }

  }
}

   printf("%d\n", c);

 }

 return 0;

}