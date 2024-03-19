#include <stdio.h>
int main(void)
{
    char a[5];
    int i=0;
        scanf("%s", a);
        for(i=1;i<4;i++){
            if(a[i]==a[i-1]){
                printf("Bad\n");
                return 0;
            }
        }
    printf("Good\n");
    

    return 0;
}
