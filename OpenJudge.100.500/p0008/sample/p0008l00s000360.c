#include<stdio.h>
#include<math.h>

#define MAX_N 999999

int main(){

    int i, j, n;

    // ?´???°?????°??????.
    char check_list[MAX_N];
    for (i=2; i<= MAX_N; ++i){
        if (check_list[i] == '1') continue;

        check_list[i] = '2'; // ?´???°

        for (j=2; j<MAX_N; ++j){
            if (i*j >= MAX_N)break;
            check_list[i*j] = '1';
        }
    }

    int num = 0;
    int save[MAX_N] = {};
    for (i=1; i<= MAX_N; ++i){
        if (check_list[i] == '2') ++num;
        save[i] = num;
    }

    while ( (fscanf(stdin, "%d", &n)) != EOF){
        printf("%d\n", save[n]);
    }

    return 0;
}