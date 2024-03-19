#include<stdio.h>

int main(){
    int array[500][500];
    int n,i,j,v,u,jisu;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            array[i][j] = 0;
        }
    }

    for(i=0;i<n;i++){
        scanf("%d%d",&u,&jisu);
        u = u - 1;
        for(j=0;j<jisu;j++){
            scanf("%d",&v);
            v = v - 1;
            array[u][v] = 1;
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j>0){
                printf(" ");
            }
            printf("%d",array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
