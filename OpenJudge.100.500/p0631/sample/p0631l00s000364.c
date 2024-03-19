#include <stdio.h>

int main()
{
    int cat, dog, x;
    scanf("%d%d%d", &cat, &dog, &x);
    if(cat + dog >= x){
        if(cat <= x){
            printf("YES\n");
        }
        else printf("NO\n");
    }
    else printf("NO\n");
    return 0;
}