#include<stdio.h>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int i, j, cnt=0;
    for(i=0;i<=100;i++){
        for(j=0;j<=100;j++){
            if(x == i+j && y == 2*i+4*j){
                cnt++;
            }
        }
    }
    if(cnt != 0){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}
