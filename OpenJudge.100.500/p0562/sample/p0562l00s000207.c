#include <stdio.h>

int main(void){
    int origSocket, targetSocket, valueStorage = 0, tester = 0;

    scanf("%d %d", &origSocket, &targetSocket);

    while (tester <= targetSocket) {
        tester = tester + (origSocket - 1);
        valueStorage++;
    }

    printf("%d\n", valueStorage-1);

    return 0;
}

