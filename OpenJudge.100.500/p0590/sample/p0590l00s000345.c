#include<stdio.h>
int main()
{
    int a, b, c, d, e, k;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &k);
    if((e-a) <= k){
        printf("Yay!");
        }else{
            printf(":(");
        }
    
    return 0;

}