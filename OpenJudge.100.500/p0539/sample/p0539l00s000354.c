#include<stdio.h>

int main(){
    int a,j,i;
    scanf("%d", &a);
    for(i = 9; i > 0; i--){
        for(j = i; j > 0; j--){
            if (i*j == a)
            {
                i = -1;
                j = -1;
            }
            
        }
    }
    if (i == -2)
    {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
     return 0;
}