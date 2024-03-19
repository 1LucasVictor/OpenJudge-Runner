#include <stdio.h>

int main(void) {
   int i,j,k;
    int n,m,l,num;
    
    scanf("%d",&n);
    scanf("%d",&m);    
    scanf("%d",&l); 


    long int A[n][m],B[m][l],C[n][l];
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&num);
            A[i][j] = num;

        }
    }
    
    for(j=0;j<m;j++){
        for(k=0;k<l;k++){
            scanf("%d",&num);
            B[j][k] = num;

        }
    }
    
    for(i=0;i<n;i++){
        for(k=0;k<l;k++){
            C[i][k] = 0;
        }
    }
 
    
    for(i=0;i<n;i++){
        for(k=0;k<l;k++){
            for(j=0;j<m;j++){
                
                C[i][k] += A[i][j] * B[j][k];   
            }
            printf("%d",C[i][k]); 
            if(k != l-1){
                printf(" ");
            }
        }
          printf("\n");
    }
    
	return 0;
}