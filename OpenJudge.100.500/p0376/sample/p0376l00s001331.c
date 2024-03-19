#include<stdio.h>

int main(){
    int n[100],a,i;
    scanf("%d",&a);

    for(i = 0; i < a; i++){
        if(i == a - 1){
            scanf("%d",&n[a-1]);
            break;
        }
        scanf("%d ",&n[i]);
    }

    for(i = 0; i < a; i++){
        if(i == a - 1){
            printf("%d",n[0]);
            break;
        }
        printf("%d ",n[a-1-i]);
    }

    puts(""); 

    return 0;
}
