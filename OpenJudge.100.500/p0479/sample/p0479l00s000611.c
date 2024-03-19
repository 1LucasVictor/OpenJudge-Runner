#include<stdio.h>
int main(void){

    int member;
    int member_number[200020];
    int ans[200020][1];
    scanf("%d",&member);
    
    for(int k = 0; k <= member; k++){
        ans[k][0] = 0; 
    }

    for(int i = 0; i < member-1; i++){
        scanf("%d",&member_number[i]);
        ans[member_number[i]][0] += 1;
    }

    for(int j = 1; j <= member; j++){
        printf("%d\n",ans[j][0]);
    }

    
    return 0;
}