#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);

    int s[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++){
        if(s[i]%2 == 0){
            /*偶数のとき*/
            if(s[i]%3 != 0 && s[i]%5 !=0){
                printf("DENIED\n");
                return 0;
            }
        }
    }printf("APPROVED\n");
    return 0;
}
