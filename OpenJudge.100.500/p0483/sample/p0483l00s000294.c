#include <stdio.h>
int main()
{
    int N, lastDigit;

    scanf("%d", &N);


if(N>=100 && N<=999){
    while(N!=0)
{
    lastDigit=N%10;
    N=N/10;

if(lastDigit==7){
    printf("Yes");
    exit(0);

}
        lastDigit = 0;

}

    printf("No");
}

return 0;
}

