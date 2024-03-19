#include<stdio.h>
#include<stdlib.h>

void ini(long *x, int n);
void scan(long *x, int n);
void print(long *x, int a, int b);

int main(void){

  int n, m, l, i, j, k;
  long *a, *b, *c;

  scanf("%d %d %d", &n, &m, &l);

  a = (long *)malloc(sizeof(long)*n*m);
  b = (long *)malloc(sizeof(long)*m*l);
  c = (long *)malloc(sizeof(long)*n*l);

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

void ini(long *x, int n){
  long i;
  for(i=0;i<n;i++){
    x[i] = 0;
  }
}

void scan(long *x, int n){
  long i;
  for(i=0;i<n;i++){
    scanf("%ld", &x[i]);
  }
}

void print(long *x, int a, int b){
  long i, j;
  for(i=0;i<a;i++){
    for(j=0;j<b;j++){
      printf("%ld", x[i*b+j]);
      if(j != b-1){
        printf(" ");
      }
    }
    printf("\n");
  }
}

