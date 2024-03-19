#include "stdio.h"

int main(void){
    int input=0;
    int i = 1;

    scanf("%d",&input);

    if(input == 3) {
        printf(" 3\n");
        return 0;
    }

    while(1) {
        if(i % 3 == 0) {
            printf(" %d", i);
        }
        else if(i % 10 == 3) {
            printf(" %d", i);
        }
        else if(i/10 == 3) {
            printf(" %d", i);
        }

        i++;
        if(i == input) {
            if(i % 3 == 0) {
                printf(" %d\n", i);
            }
            else {
                printf("\n");
            }

            break;
        }
    }
    return 0;
}
