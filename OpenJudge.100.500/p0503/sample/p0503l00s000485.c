
#include<stdio.h>

/* void judge(int data[], int n){
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(data[i] == data[j]){
                printf("NO\n");
                return ;
            }
        }
    }
    printf("YES\n");
    return ;
}
*/
int main(void){
    int n, judge = 1;
    scanf("%d", &n);
    int data[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &data[i]);
        for(int j = 0; j < i; j++){
            if(judge == 1 && data[i] == data[j]){
                judge = 0;
            }
        }
    }
    if(judge == 1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}