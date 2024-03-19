#include <stdio.h>

int main() 
{
    int num;
    int a, b, c;

    scanf("%d", &num);

    a = (int)(num / 100);
    b = (int)((num - a*100) / 10);
    c = (int)(num - a*100 - b*10);
    
    if ( a == 7 ){
        printf("Yes");
    } else if ( b == 7 ){
        printf("Yes");
    } else if ( c == 7 ){
        printf("Yes");
    } else{
        printf("No`");
    }

    return 0;

}

