#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
    int m,n,i,j;
    long int **A;
    long int *B;
    long int *C;
    
    scanf("%d %d",&n,&m);
    
    if(m<1||n<1||100<m||100<n){
        printf("error\n");
        return 0;
    }
    
    A=malloc(sizeof(long int *) * m);
    
    for(i=0;i<m;i++){
        A[i]=malloc(sizeof(long int) * m);
    }
    
    B=(long int*)calloc(m,sizeof(long int));
    C=(long int*)calloc(n,sizeof(long int));
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            //printf("%d %d:%d %d\n",n,m,i,j);
            scanf("%ld",&A[j][i]);
            if(A[j][i]<0||1000<A[j][i]){
                printf("error\n");
                return 0;
            }
        }
    }
    
    for(i=0;i<m;i++){
        scanf("%ld",&B[i]);
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
    
    for(i=0;i<n;i++){
        printf("%ld\n",C[i]);
    }
    
    
   
    free(A);
    free(B);
    
    return 0;
}
