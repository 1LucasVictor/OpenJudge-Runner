#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, j;
    int n;
    int card[4][14]={};
    char mark;
    int num;
    scanf("%d", &n);
    
    for (int i=0; i<n; i++) {
        scanf("%c", &mark);//改行読み込み
        scanf("%c %d", &mark, &num);
        if (mark == 'S') {
            card[0][num-1] = num;
        }else if(mark == 'H'){
            card[1][num-1] = num;
        }else if(mark == 'C'){
            card[2][num-1] = num;
        }else if(mark == 'D'){
            card[3][num-1] = num;
        }
    }
    
    /*
    for (j=0; j<4; j++) {
        for (i=0; i<13; i++) {
            if (card[j][i] == -1) {
                printf("%d\n", card[j][i]);
            }
        }
    }
     */
    //確認用
    
    for (j=0; j<4; j++) {
        for (i=0; i<13; i++) {
            if (card[j][i] == 0) {
                switch (j) {
                    case 0:
                        printf("S %d\n", i+1);
                        break;
                    case 1:
                        printf("H %d\n", i+1);
                        break;
                    case 2:
                        printf("C %d\n", i+1);
                        break;
                    case 3:
                        printf("D %d\n", i+1);
                        break;
                    default:
                        break;
                }
            }
        }
    }
    
    return 0;
}
