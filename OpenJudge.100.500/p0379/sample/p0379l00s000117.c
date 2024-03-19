#include <stdio.h>

int main(void){

    int n,m;
    int i,j,k;
    int reslut[128]={0};

    scanf("%d %d",&n,&m);
    int two_array[n][m];

    for(i = 0; i<n; i++){
        for(j = 0; j<m; j++){
            scanf("%d",&two_array[i][j]);
        }
    }

    int one_array[m];

    for(k = 0; k<m; k++){
        scanf("%d",&one_array[k]);
    }

    for(i=0; i<n;i++){
        for(j=0; j<m; j++){
            reslut[i] += two_array[i][j] * one_array[j];
            
        }
        printf("%d\n",reslut[i]);
    }
    
    

}
