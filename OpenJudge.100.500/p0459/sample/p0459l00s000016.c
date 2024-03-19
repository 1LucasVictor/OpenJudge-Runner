#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    for(int i = 0;i <= x;i++){
        for(int j = 1;j <= x - i - 1;j++){
            if(i * 2 + j * 4 == y || i * 4 + j * 2 == y){
                printf("Yes\n");
                return 0;
            }
        }
    }
    printf("No\n");
    return 0;
}
