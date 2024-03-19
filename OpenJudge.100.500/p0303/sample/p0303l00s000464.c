#include <stdio.h>

void sort(int n, int a[n]);

int main(){
  int n, k;
  int a[10000];
  int w[10000];
  int i,j;

  scanf("%d %d", &n, &k);
  for(i=0;i<k;i++){
    a[i]=0;
  }
  for(i=0;i<n;i++){
    scanf("%d", &w[i] );
  }
  sort(n,w);
  for(i=n-1;i>=0;i--){
    a[0] += w[i];
    sort(k,a);
    /*for(j=0;j<k;j++) printf("%d ", a[j]);
    printf("\n");*/
  }
  printf("%d\n", a[k-1]);

  return 0;
}

void sort(int n, int a[n]){
  int i, j, tmp;
  for (i = 1; i < n; i++) {
    tmp = a[i];
    if (a[i-1] > tmp) {
        j = i;
        do {
            a[j] = a[j-1];
            j--;
        } while (j > 0 && a[j-1] > tmp);
        a[j] = tmp;
    }
  }
}