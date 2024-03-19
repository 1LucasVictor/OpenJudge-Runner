#include<stdio.h>
typedef struct edge{
  int c, p;
}T_edge;
int main(){
  int n;
  scanf("%d", &n);
  T_edge a[n][n];
  int p[n];
  int w[n];
  int i, j;
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%d", &a[i][j].c);
      a[i][j].p = 0;
    }
    p[i] = 0;
    w[i] = 0;
  }
  int min;
  p[0] = 1;
  int sum = 0;
  int k;
  for(i = 0; i < n; i++){
    min = 2001;
    for(j = i; j >= 0; j--){
      //printf("%d:%d ", j, w[j]);
      for(k = n - 1; k >= 0; k--){
	//printf(" %d.%d", k, a[w[j]][k].c);
	if(0 < a[w[j]][k].c & a[w[j]][k].c < min){
	  min = a[w[j]][k].c;
	  w[i + 1] = k;
	  //printf(" %d ", min);
	}
      }
    }
    sum += min;
    //printf("\n");
  }
  printf("%d\n", sum);
  return 0;
}