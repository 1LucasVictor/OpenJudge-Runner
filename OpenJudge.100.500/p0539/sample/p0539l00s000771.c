/*  ex3_4
    Rikuta  */

#include <stdio.h>

int main(void){

    int number;
    //numberの読み込み
    scanf("%d",&number);
    //for文を二つ使って1*1から9*9まで全通りを考える．
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {   
            //i*jがnumberとなったときYesを出力して終了．
            if (i*j==number)
            {
                printf("Yes\n");
                return 0;
            }
            
        }
        
    }
    //Noを出力
    printf("No\n");

    return 0;
}