#include <stdio.h>

int main(void){
    char sta[4];
    int i;

    scanf("%s", sta);
    for ( i = 0; i < 2; i++) {
        if(!(sta[i]==sta[i+1])){
            printf("Yes\n");
            return 0;
        }
    }printf("No\n");
    return 0;
}
