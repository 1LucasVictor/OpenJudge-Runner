#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int int_cmp(const void *a, const void *b)
{
    const int *ia = (const int *)a;
    const int *ib = (const int *)b;
    return *ia  - *ib;

}

int main (void) {
int n;
scanf("%d",&n);
int array[n];
for (int i=0;i<n;i++){
    scanf("%d",&array[i]);
}
qsort(array,n,sizeof(array[0]),int_cmp);
for (int j=0;j<n-1;j++){
   if (array[j]==array[j+1]) {printf("NO");
                             return 0;}
  }
printf("YES");

return EXIT_SUCCESS;
}


