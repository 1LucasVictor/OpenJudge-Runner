#include<stdio.h>

int main(){
    int K,A,B;

    scanf("%d", &K);
    scanf("%d %d", &A, &B);

    int t_min = A / K;
    int t_max = B / K;
    int i,flag;

    for( i = t_min; i <= t_max; i++ ){
        if( i * K <= B && i * K >= A ){
            flag = 1;
            break;
        }
    }

    if( flag == 1 ) printf("OK\n");
    else printf("NG\n");

    return 0;
}
