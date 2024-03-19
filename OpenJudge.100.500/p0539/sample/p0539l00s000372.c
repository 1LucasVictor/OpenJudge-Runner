#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int flag = 0;
    for(int i = 1; i < 10; i++){
        for(int j = 1; j < 10; j++){
            if(n == i * j){
                flag = 1;
                break;
            }else{
                continue;
            }
        }
        if(flag == 1){
            break;
        }
    }
    if(flag == 1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}