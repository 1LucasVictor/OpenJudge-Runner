
#include <stdio.h>

int main()
{   int n;
    scanf("%d",&n);
    for(int i=1;i<=9;i++){
        if(n%i==0&&n/i<=9){
            printf("Yes");
            return 0;
        }
    }
    printf("No");
    return 0;
}
