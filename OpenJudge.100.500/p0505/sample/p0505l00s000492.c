#include <stdio.h>
int compa(const void *a,const void *b)
{
 return *(int*)b-*(int*)a;
}
int main(void)
{
 int H,N,i,total=0;
 int A[10001];
 scanf("%d %d",&H,&N);
 for(i=0;i<N;i++)
  scanf("%d ",&A[i]);

 qsort(A,N,sizeof(int),compa);


 for(i=0;i<N;i++)
  total += A[i];

 if(H-total <=0) printf("Yes\n"); 
 else printf("No\n");
 return 0;
}