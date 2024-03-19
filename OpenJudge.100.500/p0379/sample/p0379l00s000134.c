#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
    int m,n,i,j;
    int **A;
    int *B;
    int *C;
    int dummy;
    
    scanf("%d %d",&n,&m);
    
    if(m<1||n<1||100<m||100<n){
        printf("error\n");
        return 0;
    }
    
    A=malloc(sizeof(int *) * m);
    
    for(i=0;i<m;i++){
        A[i]=malloc(sizeof(int) * m);
    }
    
    B=(int*)calloc(m,sizeof(int));
    C=(int*)calloc(n,sizeof(int));
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&dummy);
            if(dummy<0||1000<dummy){
                printf("error\n");
                return 0;
            }
            else{
                A[j][i]=dummy;
            }
        }
    }
    
    for(i=0;i<m;i++){
        scanf("%d",&B[i]);
        if(B[i]<0||1000<B[i]){
            printf("error\n");
            return 0;
        }
    }
    
    
    for(i=0;i<n;i++){
        C[i]=0;
        for(j=0;j<m;j++){
            C[i]+=A[j][i]*B[j];
        }
    }
    
    for(i=0;i<m;i++){
        free(A[i]);
    }
    free(A);
    free(B);
    
    for(i=0;i<n;i++){
        printf("%d\n",C[i]);
    }
    
    return 0;
}
