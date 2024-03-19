#include<stdio.h>

int main(void){
    int a, b, c, k;
    scanf("%d", &k);
    scanf("%d %d", &a, &b);
    c = 0;

    for(int i = 1; i * k <=b; i++){
        if (i*k >= a && i*k <= b)
        {
            c++;
            break;
        }
    }
    if(c != 0){
        printf("OK\n");
    }   else
    {
        printf("NG\n");
    }
    
    return 0;
}