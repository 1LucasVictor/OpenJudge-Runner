#include<stdio.h>

int main(){
	char S[3];
    
    //入力
	scanf("%s", &S[0]);

    //判定結果出力
    if((S[0] == S[1]) && (S[0] == S[2])){
        printf("No");
    }else{
        printf("Yes");
    }

     return 0;
}