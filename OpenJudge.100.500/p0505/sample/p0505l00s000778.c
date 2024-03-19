#include <stdio.h>
int main()
{
    int H, N, i, j, tmp;
    int A;
    int breakpoint = 0;

    scanf("%d %d", &H, &N);
    for (int a = 0; a < N; a++)
    {
        scanf("%d", &A);
      breakpoint += A;
      
    }
   
   if(breakpoint>=H){
   printf("Yes");}else{printf("No");}
    return 0;
}