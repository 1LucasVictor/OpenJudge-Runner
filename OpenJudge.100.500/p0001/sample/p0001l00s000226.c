#include <stdio.h>

int main(void) {
    int input1;
    int input2;
    int number;
    while(scanf("%d %d", &input1,&input2)!=EOF) {
    int number=input1+input2;
    if(number<10)
    {printf("1");}
    else if(number<100&&number>=10)
    {printf("2");}
    else if(number<1000&&number>=100)
    {printf("3");}
    else if(number<10000&&number>=1000)
    {printf("4");}
    else if(number<100000&&number>=10000)
    {printf("5");}
    else if(number<1000000&&number>=100000)
    {printf("6");}
    }
    return 0;
}
