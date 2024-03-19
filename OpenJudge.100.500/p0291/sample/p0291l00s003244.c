#include <stdio.h>

int main(void){
    /*宣言部*/
    unsigned long input, x, value[200000]={0};  /*input:入力数 x:ループ変数 value:価格*/
    unsigned long min=0, max=0, time=0;         /*min:最小値 max:最大値 time:購入したであろうターン*/
    unsigned long pair[2]={0};                  /*pair:購入＆売却ができたであろう組み合わせ*/
    
    
    /*入力部*/
    scanf("%lu", &input);
    for(x=0; input>x; x++){
        scanf("%ul", &value[x]);
    }
    
    
    /*判定部*/
    for(x=0; input>x; x++){
        if(x==0 || min>value[x]){   /*最初の価格か、今までの価格より安ければ価格を最小値に保存*/
            min = value[x];
            time = x;               /*最小値を記録し購入したであろうターンを保存しておく*/
        }
        
        if(time<x && min<value[x]){                         /*時系列的に買った後であり、かつ利益が出る場合で...*/
            if((pair[1]-pair[0]) < (value[x]-min)){         /*過去の価格差よりも、今の価格差の方が大きかった場合に...*/
                max = value[x];                             /*その価格を最大値として保存しておく*/
                
                pair[0] = min;                              /*購入＆売却できた組み合わせを保存しておく*/
                pair[1] = max;
            }
        }
    }
    
    
    /*出力部*/
    printf("%lu\n", pair[1]-pair[0]);
    
    return 0;
}