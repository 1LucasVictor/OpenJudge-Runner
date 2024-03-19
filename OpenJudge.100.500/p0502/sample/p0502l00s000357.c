#include <stdio.h>
#define NUMBER 100
int main(void)
{
    int n;
    int a[NUMBER];
    int i;
    int c = 0;
    
    scanf("%d",&n);
    for (i = 0;i < n;i++)
        scanf("%d",&a[i]);
    
    for (i = 0;i < n;i++){
        if (a[i]%2 == 0 && a[i]%3 != 0 && a[i]%5 != 0){
            c = 1;
            break;
        }
    }
    if (c == 1)
        printf("DENIED\n");
    else
        printf("APPROVED\n");
    return 0;
}
