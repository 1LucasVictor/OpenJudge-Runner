#include <stdio.h>

int main(void){
    int origSocket, targetSocket, valueStorage = 0, tester = 0;

    scanf("%d %d", &origSocket, &targetSocket);

    for (int i = 0; i < targetSocket; i++) {
        valueStorage = valueStorage + origSocket;
        tester++;
        if (valueStorage >= targetSocket) {
            printf("%d\n", tester);
            break;
        }
    }


    return 0;
}
