#include <stdio.h>

int main(int argc, const char * argv[])
{

    int train[11] = {0};
    int input;
    int store = 0;
    while (scanf("%d", &input) != EOF) {
        if (input != 0) {
            store++;
            train[store] = input;
        }
        else {
            printf("%d\n", train[store]);
            store--;
        }
    }
    return 0;
}