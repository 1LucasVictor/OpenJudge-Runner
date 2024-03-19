#include <stdio.h>
int main(void){
    char c1,c2,c3;
    scanf("%c",&c1);
    scanf("%c",&c2);
    scanf("%c",&c3);
    if(c1==c2&&c2==c3){
        printf("No");
    }else{
        printf("Yes");
    }
    return 0;
}