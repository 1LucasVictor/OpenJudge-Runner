#include <stdio.h>

int main(void)
{
    double doua1, doub2;
    int a, b;
    int i, j, inta1, intb2, ans1 = 0, ans2 = 0, count;
    int x[1000],y[1000];
    
    //値が2個入れられるたびにループ
    while (scanf("%d %d", &a, &b) == 2) {
        //終了判定
        if (a < 0 || b < 0) {
            break;
        }
        //変数の初期化
        ans1 = 0;
        ans2 = 0;
        count = 0;
        for (i = 0; i < 100; i++) {
            x[i] = 0;
        }
        for (j = 0; j < 100; j++) {
            y[i] = 0;
        }
        
        //最大公約数を求める
        for (i = 1; i <= a/2 || i <= b/2; i++) {
            doua1 = a;
            doub2 = b;
            doua1 = doua1 / i;
            doub2 = doub2 / i;
            inta1 = doua1;
            intb2 = doub2;
            //iで割った値が両方整数ならiを最大公約数としてans1に代入
            if (doua1 / inta1 == 1.0 && doub2 / intb2 == 1.0) {
                ans1 = i;
            }
        }
        
        //最小公倍数を求める
        //最小公倍数が出るまで無限ループ
        while (ans2 == 0) {
            count++;
            //入力値の整数倍したものをx[]とy[]に代入
            x[count] = a * count;
            y[count] = b * count;
            //二重for文でx[]とy[]の中身をすべて比較し、一致するものがあれば最小公倍数としてans2に代入
            for (i = 1; i <= count; i++) {
                for (j = 1; j <= count; j++) {
                    //printf("x = %d y = %d\n", x[i], y[j]);
                    if (x[i] == y[j]) {
                        ans2 = x[i];
                    }
                }
                //printf("\n");
            }
        }
        //最大公約数と最小公倍数を表示
        printf("%d %d\n", ans1, ans2);
    }
    return 0;
}