#include<stdio.h>
int main(){
    int i,j,n,flag = 0;
    scanf("%d",&n);
    
    for(i = 1; i <= 9; i++){
        for(j = 1; j <= 9; j++){
            if(n == i*j){
                flag = 1;
                break;
            }
        }
    }
    if(flag == 1) printf("Yes\n");
    else printf("No\n");
    return 0;
}
