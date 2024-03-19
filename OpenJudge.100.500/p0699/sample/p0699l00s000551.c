// Twitter@KonoLv1 2020年よりエンジニアデビュー予定

#include <stdio.h>
int main(void){
    
    int text_size;  //  文節の長さ
    int text5 = 0;  //   文節が5文字のカウント
    int text7 = 0;  //  文節が7文字のカウント
    int input_date = 3; //  入力される文節数
    
    for (int i = 0; i < input_date; i++){
        scanf("%d",&text_size);
        if (text_size == 5){
            text5++;
        }else if (text_size == 7){
            text7++;
        }
    }
    if (text5 == 2 && text7 == 1){
        printf("YES");
    }else{
        printf("NO");
    }
}
