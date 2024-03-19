#include<stdio.h>
#include<stdlib.h>

void ini(int *x, int n);
void scan(int *x, int n);
void print(int *x, int a, int b);

int main(void){

  int n, m, l, i, j, k;
  int *a, *b, *c;

  scanf("%d %d %d", &n, &m, &l);

  a = (int *)malloc(sizeof(int)*n*m);
  b = (int *)malloc(sizeof(int)*m*l);
  c = (int *)malloc(sizeof(int)*n*l);

  //ini
  ini(a, n*m);
  ini(b, m*l);
  ini(c, n*l);

  scan(a, n*m);
  scan(b, m*l);

  //cal
  for(i=0;i<n;i++){
    for(j=0;j<l;j++){
      for(k=0;k<m;k++){
        c[i*l+j] += a[i*m+k] * b[k*l+j];
      }
    }
  }

  print(c, n, l);

  free(a);
  free(b);
  free(c);
  return 0;
}

void ini(int *x, int n){
  int i;
  for(i=0;i<n;i++){
    x[i] = 0;
  }
}

void scan(int *x, int n){
  int i;
  for(i=0;i<n;i++){
    scanf("%d", &x[i]);
  }
}

void print(int *x, int a, int b){
  int i, j;
  for(i=0;i<a;i++){
    for(j=0;j<b;j++){
      printf("%d", x[i*b+j]);
      if(j != b-1){
        printf(" ");
      }
    }
    printf("\n");
  }
}

