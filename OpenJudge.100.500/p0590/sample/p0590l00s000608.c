#include<stdio.h>

int main(){
    int num[6];
    int i,t_num;
    char *ans;
    ans = "Yay!";

    for(i=0; i<6; i++){
        scanf("%d", &num[i]);
    }

    for(i=0; i<6-2; i++){
        t_num = num[i+1] - num[i];
        if(t_num > num[5]){
            ans = ":(";
        }
    }
    printf(ans);
    return 0;
}