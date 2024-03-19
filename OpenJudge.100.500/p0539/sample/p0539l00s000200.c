#include <stdio.h>
int main(){
    
    double A;
    double ans;
    int i,j;
    int flag = 0;
    
    scanf("%lf",&A);
    
    for(i=1;i<=9;i++){
        ans = A/i;
        for(j=1;j<=9;j++){
            if(ans==j){
                flag = 1;
                break;
            }
        }
    }
    
    if(flag == 1){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}
