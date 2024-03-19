#include<stdio.h>
int main(void){
    int A[100][100],B[100],n,m,i,j;
    int anwser=0;

    scanf("%d %d",&n,&m);

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for ( i = 0; i < m ; i++){
        scanf("%d",&B[i]);
    }
    

    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            anwser+= A[i][j]*B[j];
            if( j==(m-1) ){
                printf("%d\n",anwser);
                anwser=0;
            }
        }
    }


  
    return 0;
}
