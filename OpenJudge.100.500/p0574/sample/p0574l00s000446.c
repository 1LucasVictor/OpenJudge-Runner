#include<stdio.h>
int main()
{
    int i,c=0;
    char arr[4];
    scanf("%s",arr);
    for(i=1; i<4; i++)
    {
        if(arr[i]==arr[i-1])
            c=1;
    }
    if(c==1)
        printf("Bad\n");
    else
        printf("Good\n");
    return 0;
}
