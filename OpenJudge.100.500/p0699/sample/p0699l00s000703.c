#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a[3];
  int ret;
  int i,j;
  int tmp;
  
  ret=scanf("%d%d%d", &a[0], &a[1], &a[2]);
  for (i=0; i<2; ++i){
    for (j=2; j>i; --j){
      if (a[j-1]>a[j]){
        tmp=a[j];
        a[j]=a[j-1];
        a[j-1]=tmp;
      }
    }
  }
  if ((a[0]==5 && a[1]==5)&&(a[2]==7)){
    printf("YES\n");
  } else {
    printf("NO\n");
  }

  return 0;
}
