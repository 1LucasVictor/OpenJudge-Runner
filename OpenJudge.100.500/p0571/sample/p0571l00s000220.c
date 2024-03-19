#include <stdio.h>

#define LENGTH 4

int main(void) {
    char input[LENGTH];
    int a=0,b=0,c=0,n;

    scanf("%d %d %d",&a,&b,&c);

    int trainFee = a * b;
    int taxiFee = c;

    if(trainFee >= taxiFee){
        printf("%d\n",taxiFee);
    }else{
        printf("%d\n",trainFee);
    }

    return 0;
}