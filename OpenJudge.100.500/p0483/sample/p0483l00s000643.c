#include <stdio.h>

int main()
{
    char n[3+1]; //数字を入力するとしても、その数字を文字列として認識させたいならcharで定義する

    scanf("%s", n);//文字列入力の時は、&いらない

    if(n[0] == '7' || n[1] == '7' || n[2] == '7')//文字列として受け取るのだから''がいる
        puts("Yes");
    else 
        puts( "No");
    
    return 0;
}
