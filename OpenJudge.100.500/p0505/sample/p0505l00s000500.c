#include <stdio.h>

int main()
{
    int H;
    int N;
    int Res=0;
    int arr[256];
    
    scanf("%d %d", &H, &N);
    Res = H;
    
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
    

    return 0;
}
