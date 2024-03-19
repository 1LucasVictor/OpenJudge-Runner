#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    switch(a){
        case 5 : 
                if( (b == 7 && c ==5) || (b == 5 && c == 7) ){
                    printf("YES\n");
                }else{
                    printf("NO\n");
                }
                break;
        case 7 : 
                if(b == 5 && c == 5){
                    printf("YES\n");
                }else{
                    printf("NO\n");
                }
                break;
        default:  
                printf("NO\n");
    }

    return 0;
}