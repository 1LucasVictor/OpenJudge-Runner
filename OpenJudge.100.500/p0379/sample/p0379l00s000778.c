#include <stdio.h>

int main(void){
    int n,m,i,o,sum=0,map[100][100],line[100];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
        for(o=0;o<m;o++)
            scanf("%d",&map[i][o]);
    for(i=0;i<m;i++)
        scanf("%d",&line[i]);
    for(i=0;i<n;sum=0,i++){
        for(o=0;o<m;o++)
            sum+=map[i][o]*line[o];
        printf("%d\n",sum);
    }
    return 0;
}