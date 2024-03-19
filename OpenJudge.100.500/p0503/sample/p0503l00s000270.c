#include <stdio.h>
#include <stdlib.h>
 
long compare(const void *a, const void *b)
{
    return *(long*)a - *(long*)b;
}

int main(void){
  int i,j,n;
  long a[200000];
  
  scanf("%d", &n);
  
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  
  qsort(a, n, sizeof(long), compare);
  
  for(i=0;i<n-1;i++){
      if(a[i]==a[i+1]){
        printf("NO");
        return 0;
    }
  }
  
  printf("YES");
  return 0;
}