#include <stdio.h>
#define N 10000
#define Q 500

int linersearch(int *,int,int);

int main() {
  int i,n,q,S[N],T[Q],cnt=0;

  scanf("%d",&n);
  for (i = 0; i < n; i++) {
    scanf("%d",&S[n]);
  }
  scanf("%d",&q);
  for (i = 0; i < q; i++) {
    scanf("%d",&T[q]);
  }

  for (i = 0; i < q; i++) {
    linersearch(S,n,T[i]);
    if(linersearch(S,n,T[i]) == 1){
      cnt++;
    }
  }

  printf("%d\n",cnt);
  return 0;
}
int linersearch(int *array,int n,int key){
  int i;

  for (i = 0; i < n; i++) {
    if (array[i] == key) {
      return 1;
    }
  }
  return 0;
}