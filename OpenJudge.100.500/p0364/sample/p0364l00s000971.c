#include <stdio.h>

int main(void)
{
    int a,b,c,d,e;
    scanf("%d %d %d %d %d", &a ,&b ,&c ,&d ,&e);
    if(c>e){
        if(a>c+d){
            if(d>e){
                if(b>e+d){
                    printf("Yes\n");
                }
                else{
                    printf("No\n");
                }
            }
            else{
                printf("No\n");
            }
        }
        else{
            printf("No\n");
        }

        
        
        
    }
    else{
        printf("No\n");
    }
    return 0;
}