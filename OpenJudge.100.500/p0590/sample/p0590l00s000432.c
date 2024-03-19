#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a[5],k;

    for (int i = 0;i < 5;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);

    bool TF = true;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[j] - a[i] > k){
                TF = false;
            }
        }
    }

    if  (TF == false){
        printf(":(");
    }else{
        printf("Yay!");
    }
}