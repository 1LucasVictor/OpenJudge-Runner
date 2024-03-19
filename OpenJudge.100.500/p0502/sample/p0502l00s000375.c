#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int a[N];

    int t = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 != 0){
            t = t;
        }
        else if ((a[i] % 2 == 0) && ((a[i] % 3 == 0) || (a[i] % 5 == 0)))
            {
                t = t;
        }
        else
        {
                t++;
            }

    }
    if (t == 0)
    {
        printf("APPROVED");
    }else{
    printf("DENIED");
    }
    return 0;
}