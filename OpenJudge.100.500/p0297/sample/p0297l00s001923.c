#include <stdio.h>


int main()
{
    int i, sum = 0;


    //入力
    int n, q;
    scanf("%d%d", &n, &q);

    char name[n][11];
    int time[n];
    for( i = 0; i < n; ++i ){
        scanf("%s%d", name[i], &time[i]);
        sum += time[i];
    }

    //処理と出力
    int queue[sum/q], in = 0, out = 0, cnt = 0;
    for( in = 0; in < n; ++in ) queue[in] = in;
    while( out < in ){
        int tmp = queue[out++];
        
        if( time[tmp] - q <= 0 ){
            cnt += time[tmp];
            printf("%s %d\n", name[tmp], cnt);
        } else {
            queue[in++] = tmp;
            time[tmp] -= q;
            cnt += q;
        }
    }


    return 0;
}