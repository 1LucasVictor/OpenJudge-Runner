#include <stdio.h>

int main() 
{

    long int num;
    int joshi;
    int  buka[100000] = {0};

    scanf("%ld", &num);

    for (int i = 0; i < num-1; ++i){
        scanf("%d", &joshi);
        buka[joshi-1]++;
    }

    for (int i = 0; i < num; ++i){
        printf("%d\n", buka[i]);
    }

    return 0;

}

