#include <stdio.h>
int main(void){
    int second=0;
    int minute=0;
    int hour=0;

    scanf("%d\n",&second);
    
    while(second>=3600)
    {
        second=second-3600;
        hour++;
    }
    while(second>=60)
    {
        second=second-60;
        minute++;
    }
    
    printf("%d:%d:%d\n",hour,minute,second);
    
    return(0);
}

