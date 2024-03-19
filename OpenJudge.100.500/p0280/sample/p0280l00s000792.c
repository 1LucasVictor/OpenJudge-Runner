#include<stdio.h>

static const int MAX = 500;
static const int INFTY = (1<<21);
int nogo(int ,int[],int);

int main(){
  int n, i, j, e, sum;
  /*your code*/
  int M[MAX][MAX],p[MAX];
  int min,place;
  scanf("%d", &n);

  for ( i = 0; i< n-1; i++ ){
    for ( j = 0; j < n; j++ ){
      scanf("%d", &e);
      M[i][j] = (e==-1)?INFTY:e;
    }
  }

  /*your code*/
  for(i=0;i<n;i++) { /*空集合でない時で、すべて連結しているため*/
    min = INFTY;
    for(j=0;j<n;j++) {
	    if(min > M[i][j] && (nogo(j,p,i)==1)) { 
	      min = M[i][j];
	      place = j; 
	    }
    }
    p[i] = place;
    M[i][p[i]] = min;
    //printf("place %d  costmin %d\n",p[i],M[i][p[i]]);
  }
  sum = 0;

  for ( i = 0; i < n; i++ ){
    if ( p[i] != -1 ) sum += M[i][p[i]];
  }

  printf("%d\n", sum);

  return 0;
}

int nogo(int key,int p[],int gonum) {
  int i;
  for(i=0;i<gonum;i++) {
	if(p[i] == key) return 0;
  }
  return 1;
}