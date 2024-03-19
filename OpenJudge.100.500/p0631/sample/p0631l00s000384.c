#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int min_comp(int min, int a)
{

}
int max_comp(int max, int a)
{
  if(max>a)    return max;
  else    return a;
}


int main()
{
  int K;
  int A,B,C;
  int A2,B2,C2;
  int max_flag;
  int min,max;
  int number;
  int debug_cnt;
//  long long N[101]={};
  int i;
  int cont;
//    int k=0;
  scanf("%d %d %d", &A, &B, &C);
  if((A<=C)&&(C<B))
    printf("YES\n");
  else
    printf("NO\n");

  //  else printf("No\n"); 
return 0;
}
