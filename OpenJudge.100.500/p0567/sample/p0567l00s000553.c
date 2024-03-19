#include <stdio.h>
int main(void){
    int i,j;            //  ループ文に使用
    int x,y,z;
    int count,count2;   //  カウント用に使用
    char s[256];        //  文字列
    
    count = 0;
    count2 = 0;
    
    //  入力処理
    
    scanf("%d %d %d",&x,&y,&z);
    
    //  計算処理
    
    x = x - y;
    z = z - x;
    if (z < 0){
        z = 0;
    }
    //  出力処理
    
    printf("%d",z);
    
    
}
