#include <stdio.h>
int main(void){

    int a, b, c;
    
    scanf("%d", &a);
    scanf("%d %d", &b, &c);
    
    for(int i=0; i<1001; i++)
    {
        if(b<i*a && c>i*a)
        {
            printf("OK\n");
            return 0;
        }
    }
    
    printf("NG\n");
    return 0;
}
