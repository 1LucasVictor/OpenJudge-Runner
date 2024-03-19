#include <stdio.h>
#include <stdlib.h>

int asc(const void *a, const void *b) {
  return *(long *)a - *(long *)b;
}

int main(){
   int i,n;
   long a[200001];
    
   scanf("%d",&n);
   for (i=0;i<n;i++) scanf("%ld",&a[i]);
   qsort(a,n,sizeof(long),asc);

   for (i=1;i<n;i++) 
      if (a[i-1]==a[i]) {
         puts("NO");
         return 0;
   }
   puts("YES");
   return 0;
}
