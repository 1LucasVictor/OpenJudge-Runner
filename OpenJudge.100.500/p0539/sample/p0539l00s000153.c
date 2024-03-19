/* ex3-4
    kas056 */
#include <stdio.h>
int main(void){
    //積cross,フラグflagの設定
    int N,cross,flag;
    scanf("%d",&N);

    //flagの初期値設定
    flag = 0;
    /*1<=i<=9の範囲内のiと、1<=j<=9の範囲内のjで
    九九を全て表すことが出来る。ループを用いて積を出す。*/
    for(int i = 1; i < 10 ; i ++){
        for (int j = 1; j<10; j++){
            cross = i * j;
            if (N == cross){//Nとcrossが一致したら
                flag = 1;//フラグを立てる
            }
        }
    }
    if (flag == 1){//フラグがたっていたら
        printf("%s\n","Yes");//Yesを出力
    }
        
    else{//立ってなかったら
        printf("%s\n","No");//Noを出力
    }

    return 0;
}
