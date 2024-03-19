#include <stdio.h>

int main() 
{

    long int num;
    long int joshi;
    long int buka[200001] = {0};

    scanf("%ld", &num);

    for (int i = 0; i < num-1; ++i){
        scanf("%ld", &joshi);
        buka[joshi-1]++;
    }

    for (int i = 0; i < num; ++i){
        printf("%ld\n", buka[i]);
    }

    return 0;

}

