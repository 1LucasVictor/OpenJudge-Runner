#include <stdio.h>

int main()
{
    int H;
    int N;
    int Res=0;
    int arr[10];
    
    scanf("%d %d", &H, &N);
    Res = H;
    
if((N < 100000) && (H < 10000))
{
    int i;
    for(i = 0; i<N; i++)
    {
        scanf("%d ", &arr[i]);
        Res = Res - arr[i];
    }
    
    if(Res > 0)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
    
}
else
{
printf("No");
}

    return 0;
}