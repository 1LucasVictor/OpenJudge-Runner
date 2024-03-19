#include<stdio.h>

int main(void)
{
        char a[4];
        int i,b;

        scanf("%s", a);
        for(i = 0; i < 3; i++){
                if(a[i] == a[i + 1]){
                        b = -1;
                }
        }
        if(b == -1){
                printf("Bad\n");
        }
        else{
                printf("Good\n");
        }
        return 0;
}