//============================================================================
// 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

//============================================================================
#define PI 3.14159265359
#define succ(x) ((x)+1)
#define pred(x) ((x)-1)
//============================================================================
void enter()
{
    int n,i,x;

    scanf("%d", &n);
    for (i=1; i<=n; i++){
        if (i % 3 ==0){
            printf(" %d", i);
            continue;
        }
        for (x=i; x; x/=10)
            if (x % 10 ==3){
                printf(" %d", i);
                break;
            }
    }
    printf("\n");
}
/*void call(int n)
{
    int i = 1;

    CHECK_NUM:
    int x = i;
    if ( x % 3 == 0 ){
        cout << " " << i;
        goto END_CHECK_NUM;
    }

    INCLUDE3:
    if ( x % 10 == 3 ){
        cout << " " << i;
        goto END_CHECK_NUM;
    }
    x /= 10;
    if ( x ) goto INCLUDE3;

    END_CHECK_NUM:
    if ( ++i <= n ) goto CHECK_NUM;

    cout << endl;
}*/
//============================================================================
int main(void)
{
    enter();
    return 0;
}
//============================================================================