#include <stdio.h>
#define NUMBER 200000
int main(void)
{
    int n;
    int a[NUMBER];
    int i,j;
    int c = 0;
    
    scanf("%d",&n);
    for (i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    
    for (i = 0;i < n-1;i++){
        for (j = i+1;j < n;j++){
            if (a[i] == a[j]){
                c = 1;
                break;
            }
        }
    }
    
    if (c == 0)
        printf("YES\n");
    
    else
        printf("NO\n");
    
    return 0;
}
