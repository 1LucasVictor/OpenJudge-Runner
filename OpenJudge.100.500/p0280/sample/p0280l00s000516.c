#include<stdio.h>
#define N 100

int prim(int );

int a[N][N];
int d[N],p[N],color[N];
int i,j,n;

int main(){


  scanf("%d",&n);

  for( i=0 ; i<n ; i++ ){
    p[i] = 0;
    d[i] = 2001;
  }
  d[0] = 0;

  for( i=0 ; i<n ; i++ ){
    for( j=0 ; j<n ; j++ ){
      scanf("%d",&a[i][j]);
    }
  }
      printf("%d\n",prim(n));

      return 0;
}



int prim(int n){
  int min, minj, total=0;

  for( i=0 ; i<n-1 ; i++ ){
    min = 2001;
    for( j=0 ; j<n ; j++ ){
      if( d[j] < min && p[j] == 0){
	min = d[j];
	minj = j;
      }
    }
    p[minj] = 1;

    for( j=0 ; j<n ; j++ ){
      if( a[minj][j] != -1 && a[minj][j] < d[j] && p[j] == 0 ){
	d[j] = a[minj][j];
      }
    }
  }
  for( i=0 ; i<n ; i++ ){
    total += d[i];
  }
  return total;
}