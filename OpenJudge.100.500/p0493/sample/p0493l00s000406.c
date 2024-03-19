#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int yen = 0;
    int happiness = 0;
    scanf("%d",&yen);

    int yen500 = yen/500;
    happiness += 1000*yen500;
    yen = yen % 500;
    int yen5 = yen/5;
    happiness += 5*yen5;

    printf("%d\n",happiness);

    return 0;
}