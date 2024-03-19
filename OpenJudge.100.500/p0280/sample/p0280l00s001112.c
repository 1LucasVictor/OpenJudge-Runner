#include<stdio.h>
 
static const int MAX = 500;
static const int INFTY = (1<<21);
 
int main(void){
    int n, i, j, e, sum;
    int x,y;
    
    int M[MAX][MAX];
    int d[MAX];
    int key[MAX],PI[MAX];
  scanf("%d", &n);
 
  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      scanf("%d", &e);
      M[i][j] = (e==-1)?INFTY:e;
    }
  }
    for(i=0;i<n;i++){
        PI[i]=-1;
        key[i]=INFTY;
        d[i]=0;
    }    
    key[0]=0;
     
    while(1){
        x=-1;
        y=INFTY;
         
        for(i=0;i<n;i++){
            if(y>key[i] && (d[i]==0)){
                x=i;
                y=key[i];
            }
        }        
         
        if(x==-1)break;
        d[x]=1;
         
         
         
        for(i=0;i<n;i++){
            if(key[i]>=M[x][i] && (d[i]==0)){
                PI[i]=x;
                key[i]=M[x][i];
            }
             
        }
                 
    }
  sum = 0;

  for ( i = 0; i < n; i++ ){
    if ( PI[i] != -1 ) sum += M[i][PI[i]];
  }
  printf("%d\n", sum);
  return 0;
}