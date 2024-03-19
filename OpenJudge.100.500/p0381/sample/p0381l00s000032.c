#include <stdio.h>
#include <stdlib.h>
/* #define debug */

int checkarray[10000][3]={0};
int counter=0;

void checkset(int x, int y, int z);

int main(int argv, char *argc[]){
    int input, target, x, y ,z;
    
    while(1){
        scanf("%d %d\n", &input, &target);
        if(0 == input && 0 == target) break;
        
        /*組み合わせを総当りしてcheckset関数に投げる*/
        for(x=1; input-2>=x; x++){
            for(y=x+1; input-1>=y; y++){
                for(z=y+1; input>=z; z++){
                    if(target == x+y+z){
                        checkset(x, y, z);
                    }
                }
            }
        }
        
        /*結果を表示する*/
        printf("%d\n", counter);
        
        /*次のチェック用に初期化する*/
        
        counter=0;
        x=1;
        y=2;
        z=3;
    }
    
    return 0;
}

void checkset(int min, int mid, int max){
    int buf, loop;
    
    /*整理の為に大中小で分ける*/
    while(!(min <= mid && mid <= max)){
        if(min > mid){
            buf = min;
            min = mid;
            mid = buf;
        }
        if(mid > max){
            buf = mid;
            mid = max;
            max = buf;
        }
    }
    
    /*大きい数字から、過去に見つけた組でないか探す*/
    for(loop=0; counter>loop; loop++){
        if(max == checkarray[loop][0]){
            if(mid == checkarray[loop][1]){
                if(min == checkarray[loop][2]){
                    return; /*過去に見つけた組だったので戻る*/
                }
            }
        
        }
    }
    /*過去に見つけた組では無かったので保存してカウンタを１増やす*/
    checkarray[counter][0] = max;
    checkarray[counter][1] = mid;
    checkarray[counter][2] = min;
    counter += 1;
    #ifdef debug
    printf("debug-checkset1:%d:%d+%d+%d=%d\n",counter, max, mid, min, min+mid+max);
    #endif
    return;
}