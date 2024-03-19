#include <stdio.h>
  
int main(){
    int flag[101];
    int f;
    int num;
    int i = 0, j = 0;
    for(i = 0;i <= 101;i++){
        flag[i] = 0;
    }
    for(i = 1;i <= 9;i++){
        for(j = 1;j <= 9;j++){
            f = i * j;
            flag[f] = 1;
        }
    }
    scanf("%d",&num);
    if(flag[num] == 1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}