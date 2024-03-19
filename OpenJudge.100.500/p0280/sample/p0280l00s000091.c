#include<stdio.h>

#define MAX 101
#define INF 2001

int minimum(){
  int l,m,c,count,i,j,min,sum,a[MAX][MAX],b[MAX][MAX];
  int k[MAX] = {};
  k[0] = 1;
  
  sum = 0;
  c = 0;
  scanf("%d",&l);

  for(i = 0; i < l; i++){
    for(j = 0; j < l; j++){
      scanf("%d",&a[i][j]);
    }
  }

 
  while(1){
     min = INF;
    for(i = 0; i < l; i++){
      if(k[i] == 1 ){
	for(j = 0; j < l; j++){
	  if(a[i][j] <= min && a[i][j] >= 0 && k[j] == 0){
	    min = a[i][j];
	    m = j;
	  }
	}
      }
    }
    if(min == INF) return sum;
    sum += min;
    k[m] = 2;
    for(i = 0; i < l; i++)
      if(k[i] == 2) k[i] = 1;
  }
  return sum;
}

int main(){

  printf("%d\n",minimum());
  
  return 0;
}

