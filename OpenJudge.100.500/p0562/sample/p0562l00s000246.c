#include <stdio.h>

int main(){
    int tapn,num,tap=1;
    scanf("%d ",&tapn);
    scanf("%d",&num);
    for (int i = 1; tapn * i < num; i++)
    {
        tap++;
    }
    
    printf("%d\n",tap);
}