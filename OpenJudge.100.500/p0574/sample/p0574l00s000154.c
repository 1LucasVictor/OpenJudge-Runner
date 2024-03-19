/*数字列Sを文字列として読み込む、また配列の終わりは'\0'で判断できるのでそれでfor文を回す*/
/*これを行うことで4桁の数字を一つずつの数字に分解する部分の工程が必要なくなるのでスマートだ*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#define LL long long
#define INF 1<<31-1
#define MIN(x,y) ((x)<(y)?(x):(y))
#define MAX(x,y) ((x)<(y)?(y):(x))

int main()
{
    char s[10];
    scanf("%s", s);
    
    for(int i = 0; s[i+1] !='\0'; i++){
        if(s[i] == s[i+1]) {printf("Bad\n"); return 0;}
    }
    printf("Good\n");
    
    return 0;
}
