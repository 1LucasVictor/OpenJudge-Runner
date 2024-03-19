#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{

    char str[1200];
    int i;
    int strLength;

    //文字列を入力する
    fgets(str, 1200, stdin);

    //strの長さを入れる
    strLength = strlen(str);

    //文字列の長さより小さい間
    for(i = 0; i < strLength; i++)
    {
        //英字だった場合
        if(isalpha(str[i]) != 0)
        {
            //大文字を小文字に置き換える
            if(isupper(str[i]) != 0)
            {
                str[i] = tolower(str[i]);
            }
            //小文字を大文字に置き換える
            else if(islower(str[i]) != 0)
            {
                str[i] = toupper(str[i]);
            }
        }

    }

    //変換した文字列を出力する
    printf("%s", str);

    return 0;
}
