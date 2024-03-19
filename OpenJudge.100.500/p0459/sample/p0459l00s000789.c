#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
typedef long long ll;


int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    if(y%2==1)
    {
        printf("No\n");
    }
    else if(2*x<=y&&y<=4*x)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    
    return 0;
}