#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int m = n/100;
    int k = n - (m*100);
    int l = k/10;
    int i = k%10;
    if(m==7||l==7||i==7){
        printf("Yes\n");
    }
    else
        printf("No\n");

    return 0;
}
