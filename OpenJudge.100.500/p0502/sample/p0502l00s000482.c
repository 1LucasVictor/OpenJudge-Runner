#include<stdio.h>
int main(){
    int tc, i, boss = 9;
    scanf("%d", &tc);
    int sum[tc];
    for(i = 0;i < tc;i++){
        scanf("%d", &sum[i]);
        if(sum[i] % 2 == 0){
            if((sum[i] % 3 == 0 || sum[i] % 5 == 0) && boss != 3){
                boss = 6;
            }
            else{
                boss = 3;
            }
        }
    }
    if(boss == 6 || boss == 9){
        printf("APPROVED\n");
    }
    else if(boss == 3){
        printf("DENIED\n");
    }
    return 0;
}
