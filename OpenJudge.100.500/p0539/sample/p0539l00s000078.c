/* ABC144_B
    Stuartyg */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


int main(void){
        int num; /*nのこと*/
        int i,j; 
        scanf("%d",&num); /*入力を受け取る*/
        for (i=1;i<=9;i++){ /* for文二個で1*1,1*2,1*3,・・・9*9まで調べる*/
                for (j=1;j<=9;j++){
                        if (num==i*j){
                                printf("Yes\n");
                                return 0; /*一致すればそこでYesと出力して終了*/
                        }
                }
        }
        /*一致しなかった場合*/
        printf("No\n");
        return 0;
}
