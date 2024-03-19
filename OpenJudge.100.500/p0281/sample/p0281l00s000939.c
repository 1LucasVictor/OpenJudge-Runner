#include<stdio.h>

static const int MAX = 500;
static const int INFTY = (1<<21);

int main(void){
    int n, i, j;
    int M[MAX][MAX];
    int d[MAX];
    int key[MAX];
    int p[MAX];
    int m,u,k,c,v;
    /* your code*/

  scanf("%d", &n);
  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      M[i][j] = INFTY;
    }
  }

  for ( i = 0; i < n; i++ ){
    scanf("%d %d", &u, &k);
    for ( j = 0; j < k; j++ ){
      scanf("%d %d", &v, &c);
      M[u][v] = c;
    }
  }

  /*your code */
    
    
    for(i=0;i<n;i++){
        p[i]=-1;
        key[i]=0;
        d[i]=INFTY;
    }
    
    d[0]=0;
    
    
    while(u!=-1){
        u=-1;
        m=INFTY;
        
        for(i=0;i<n;i++){
            if(m>d[i] && (key[i]==0)){
                u=i;
                m=d[i];
                
            }
        }
        
        //if(u==-1)break;
        key[u]=1;
        
        for(i=0;i<n;i++) {
            if(d[i] >= M[u][i]+d[u] && (key[i] == 0)) {
                p[i] = u;
                d[i] = M[u][i]+d[u];
            }
        }
        
        
        
        
    }

  for ( i = 0; i < n; i++ ){
    printf("%d %d\n", i, (d[i]==INFTY?-1:d[i]));
  }

  return 0;
}