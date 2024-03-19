#include<stdio.h>
int main()
{
    int a,b;
    while(1){
        scanf("%d %d", &a, &b);
        if(a == 0 && b == 0){
            break;
        }
        else{
            for(int i = 1;i <= b;i++){
                printf("#");
            }
            printf("\n");
            for(int i = 1;i <= a - 2;i++){
                printf("#");
                for(int j = 1;j <= b - 2;j++){
                    printf(".");
                }
                printf("#\n");
            }
            for(int i = 1;i <= b;i++){
                printf("#");
            }
            printf("\n\n");
        }
    }
    return 0;
}
