#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int kuku[10][10];
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            kuku[i][j] = i*j;
        }
    }
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            if(n == kuku[i][j]){
                printf("Yes\n");
                return 0;
            }
        }
    }
    printf("No\n");
    return 0;
}