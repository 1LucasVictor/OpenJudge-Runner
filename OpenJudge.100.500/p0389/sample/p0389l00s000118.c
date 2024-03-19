#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
    char text[10][1000],copy[10][1000];
    int lon, shuff, i, j, count, sum, k=0;
    
    while(1){
        sum=0;
        // 文字列の読み取り
        scanf("%s", text[k]);
        if(text[k][0]=='-') break;
        
        // 文字列の長さのを求める
        lon=strlen(text[k]);
        // シャッフル回数の読み取り
        scanf("%d", &shuff);
        // 実質的なシャッフルの計算
        for(i=0; i<shuff; i++){
            scanf("%d", &count);
            sum+=count;
        }
        sum%=lon;
        
        // 並び替え
        for(i = 0, j = 0; i < sum; i++, j++){
            copy[k][j] = text[k][i];
        }
        for(i = sum, j = 0; i < lon; i++, j++){
            text[k][j] = text[k][i];
        }
        for(i = 0, j = lon-sum; i < sum; i++, j++){
            text[k][j] = copy[k][i];
        }
        
        k++;
    }
    
    for(i=0; i<k; i++) printf("%s\n", text[i]);
    
    return 0;
}
