#include <stdio.h>
int main(void){
    char a,b;
    scanf("%c",&a);
    scanf("%c",&b);
    for(int i=0; i<3; i++){
        if(a==b){
            printf("Bad");
            return 0;
        }
        a=b;
        scanf("%c",&b);
    }
    printf("Good");
    return 0;
}
