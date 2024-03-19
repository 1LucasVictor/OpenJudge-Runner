#include <stdio.h>

int main(){
    int i,j,N;
    int a[10][10]={};
    int flag=0;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            a[i][j] = i*j;
        }
    }
    scanf("%d",&N);
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            if(a[i][j]==N) flag = 1;
        }
    }

    if(flag==0) printf("No\n");
    else printf("Yes\n");

    return 0;
}
