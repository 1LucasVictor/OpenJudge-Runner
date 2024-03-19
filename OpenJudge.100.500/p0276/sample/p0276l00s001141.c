#include<stdio.h>
 
int n,g[100][100];
 
void check(int i, int u){
    
    /*check 1*/
    if(u != 0)
    g[i][u] = 1;
    
}
 
int main(){
    int i,j,k[100],a,b,s[100][100],num[100];
    
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d %d",&num[i],&k[i]);
        for(j=1; j<=k[i]; j++){
            scanf("%d",&s[i][j]);
        }
    }
     /*array all 0*/
    for(i=1; i<=n; i++){
        for(j=0; j<n; j++){
        g[i][j] = 0;
    }
    }
    
    
      for(i=1; i<=n; i++){
        for(j=1; j<=k[i]; j++){
            check(num[i],s[i][j]);
        }
    }
    
    
    
     for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
        printf("%d",g[i][j]);
        if(j>=1 && j<n)
        printf(" ");
    }
    printf("\n");
    }
    
    
 return 0;   
}