#include <stdio.h>
#include <stdlib.h>

int main(void){
    char str[4];
    scanf("%s", &str);

    int i; //文字数。あとで使うのでiはここで定義
    for(i = 0; str[i] != '\0'; i++);//ヌルまで繰り返し
    
    if(i != 4 ){
        //printf("Sが４文字ではありません\n");
        exit(0);
    }

    for(int j = 0; j < 4; j++){
        if(str[j]<'A'||str[j]>'Z'){//アルファベット大文字ではない場合
            //printf("大文字ではありません\n");
            exit(0);
        }
    }
    //printf("S:%s\n", str);

    int point = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            //printf("%d,%d  " , str[i],str[j]);
            if(str[i]==str[j]) point++;
        }
    }
    //printf("\npoint:%d\n",point);
    if(point==8) printf("Yes\n");
    else printf("No\n");

    return 0;
}