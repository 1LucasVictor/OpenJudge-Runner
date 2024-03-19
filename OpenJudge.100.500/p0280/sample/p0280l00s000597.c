#include<stdio.h>




int main(){
  int n,a,b,m,j;
  int hai[100][100];
  int aa[100],bb[100];
  int t = 0;

  scanf("%d",&n);

  for(a = 0; a < n; a++){
    for(b = 0; b < n; b++){
      scanf("%d",&hai[a][b]);
    }
  }

  for(a = 0; a < n; a++){
    bb[a] = 0;
    aa[a] = 2000;
  }

  aa[0] = 0;

  for(a = 0; a < n; a++){
    m = 2000;
    for(b = 0; b < n; b++){
      if(aa[b] < m && bb[b] == 0){
	m = aa[b];
	j = b;
      }
    }

    bb[j] = 1;
    for(b = 0; b < n; b++){
      if(hai[j][b] != -1 && hai[j][b] < aa[b]  && bb[b] == 0){
	aa[b] = hai[j][b];
      }
    }
  }

  for(a = 0; a < n; a++){
    t += aa[a];
  }

  printf("%d\n",t);


  return 0;
}

  

  

