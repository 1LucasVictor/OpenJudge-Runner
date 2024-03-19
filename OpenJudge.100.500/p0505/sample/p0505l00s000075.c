/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int H;
    int N;
    int Res=0;
    int arr[10];
    
    scanf("%d %d", &H, &N);
    Res = H;
    
    int i;
    for(i = 0; i<N; i++)
    {
        scanf("%d ", &arr[i]);
    }
    
    for(i = 0; i<N; i++)
    {
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
