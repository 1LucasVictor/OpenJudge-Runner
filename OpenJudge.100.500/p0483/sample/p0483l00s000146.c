#include <stdio.h>

int main()
{
    int n;
    int a,b,c;
    do{
        scanf("%d",&n);
    } while (n < 100 || n > 999);

    a=n/100;
    b=(n-a*100)/10;
    c=(n-a*100)-b*10;
    if(a==7||b==7||c==7)
        printf("Yes");
    else
        printf("No");
    
    return 0;
}
