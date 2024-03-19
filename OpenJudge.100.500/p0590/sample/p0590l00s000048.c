#include<stdio.h>

int main(){
    int num[6];
    int i,j,t_num;
    char *ans;
    ans = "Yay!";

    for(i=0; i<6; i++){
        scanf("%d", &num[i]);
    }

    for(i=0; i<6-2; i++){
        for(j=i+1; j<6-1; j++){
            t_num = num[j] - num[i];
                if(t_num >= num[5]){
                ans = ":(";
            }
        }
    }
    printf(ans);
    return 0;
}