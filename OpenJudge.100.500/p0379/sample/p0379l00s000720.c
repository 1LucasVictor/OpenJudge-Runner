#include<stdio.h>

int mata[100][100],matb[100];

int main(void){
    int i,j,n,m,k;

    scanf("%d %d",&n,&m);
    for(i = 0;i < n;i++)
        for(j = 0;j < m;j++)
            scanf("%d",&mata[i][j]);
    for(i = 0;i < m;i++)
        scanf("%d",&matb[i]);

    for(i = 0;i < n;i++){
        k = 0;
        for(j = 0;j < m;j++)
            k += mata[i][j] * matb[j];
        printf("%d\n",k);
    }
    return 0;
}