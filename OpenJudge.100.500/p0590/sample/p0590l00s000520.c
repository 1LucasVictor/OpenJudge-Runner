#include <stdio.h>

int main(void)
{
    int ant[5], min, max, i, k;

    for (i = 0; i < 5; i++)
        scanf("%d", &ant[i]);

    scanf("%d", &k);

    min = max = ant[0];
    for (i = 1; i < 5; i++){
        if(min > ant[i]){
            min = ant[i];
        }else if(max < ant[i]){
            max = ant[i];
        }else{
            continue;
        }
    }
    printf("%s", (max - min <= k) ? "Yay!" : ":(");
    return 0;
}