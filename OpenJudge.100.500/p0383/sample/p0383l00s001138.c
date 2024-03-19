#include <stdio.h>
int main(void){
    int n,m,l; 
    int i,j,k; 
    int a[100][100]; 
    int b[110][110]; 
    long long c[100][100]={}; 
    scanf("%d %d %d",&n,&m,&l); 
    for(i=0;i<n;i++){  
        for(j=0;j<m;j++){   
            scanf("%d",&a[i][j]);  
            
        } 
        
    } 
    for(i=0;i<m;i++){  
        for(j=0;j<l;j++){   
            scanf("%d",&b[i][j]); 
            } 
        
    }
    for(i=0;i<n;i++){  
        for(j=0;j<l;j++){   
            for(k=0;k<m;k++){    
                c[i][j]+=a[i][k]*b[k][j];   
                
            }   
            if(j!=0) printf(" ");   
            printf("%lld",c[i][j]);  
            
        }  
        puts(""); 
        
    } 
    return 0;
    
}
