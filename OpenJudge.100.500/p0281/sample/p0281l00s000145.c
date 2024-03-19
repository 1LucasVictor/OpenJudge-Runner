 #include <stdio.h>
  #define N 101
  #define I 987654321
  #define A -1
  #define B 0
  #define C 1

  int X[N][N];

void search(int a,int *D);
 
  int main(void){
    int n,i,j,x,y,z,v[N];

    scanf("%d",&n);
    for(i = 0; i < n; i++){
      for(j = 0; j < n; j++){
        X[i][j] = I;
      }
    }

    for(i = 0; i < n; i++){
      scanf("%d%d",&z,&x);
      for(j = 0; j < x; j++){
        scanf("%d",&y);
        scanf("%d",&X[i][y]);
      }
    }

    search(n,v);

    for(j = 0; j < n; j++){

      printf("%d ",j);

      if(v[j] == I) printf("%d",-1);

      else printf("%d\n",v[j]);
    }
    return 0;
  }

 void search(int a,int *D){
   int min,i,j,y[N],l,m;

    for(i = 0; i < a; i++){
      y[i] = A;
      D[i] = I;
    }

    D[0] = 0;
    y[0] = B;

    while(1){
      min = I;
      l = -1;

      for(i = 0; i < a; i++){
        if(min > D[i] && y[i] != C){
          l = i;
          min = D[i];
        }
      }

      if(l == -1) break;

      y[l] = C;

      for(m = 0; m < a; m++){
        if(y[m] != C && X[l][m] != I){
          if(D[m] > X[l][m] + D[l]){
            D[m] = X[l][m] + D[l];
            y[m] = B;
          }
        }
      }
    }

    return;

  }


