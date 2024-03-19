#include <stdio.h>
#include <math.h>
int main(void){
    int i,j,k=0,n,m,s[9],c[9],num[3];
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++){
        scanf("%d %d",&s[i],&c[i]);
    }
    for(i=0;i<pow(10,n);i++){
        num[0]=(i/100)%10;
        num[1]=(i/10)%10;
        num[2]=i%10;
        k=0;
        for(j=0;j<m;j++){
            if(s[j]==1&&c[j]==0){
                printf("-1\n");
                return 0;
            }
            if(num[s[j]-1]==c[j]){
                k++;
            }
        }
        if(k==m){
            printf("%d\n",i);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}