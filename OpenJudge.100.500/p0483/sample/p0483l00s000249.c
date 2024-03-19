#include <stdio.h>
#define N 6
int main(void)
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<3;i++){
        if(n%10 == 7){
            printf("Yes");
            return 0;
        }
        n=n/10;
    }
    printf("No");
}
