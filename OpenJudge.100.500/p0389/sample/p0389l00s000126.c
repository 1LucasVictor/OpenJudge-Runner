#include <stdio.h>
#include <string.h>

int main(void)
{
  char A[200];
  int h,i,j,m,n;
  char t;

  scanf("%s",A);
  n=strlen(A);
  while (A[0]!='-'){
    scanf("%d",&m);
    for (i=0;i<m;i++){
      scanf("%d",&h);
      while(h-->0){
        t=A[0];
        for (j=1;j<n;j++){
          A[j-1]=A[j];
        }
        A[n-1]=t;
      }
    }
    printf("%s\n",A);
    scanf("%s",A);
    n=strlen(A);
  }

  return 0;
}