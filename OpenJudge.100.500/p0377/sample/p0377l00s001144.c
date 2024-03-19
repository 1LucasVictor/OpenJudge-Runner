#include<stdio.h>
main()
{
    int i, j, k, l, n, count[4][13] = {0};
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%*c%c %d", &l, &k);
        switch(l){
        case 'S':
            count[0][k - 1] = 1;
            break;
        case 'H':
            count[1][k - 1] = 1;
            break;
        case 'C':
            count[2][k - 1] = 1;
            break;
        case 'D':
            count[3][k - 1] = 1;
            break;
        }
    }
for(j = 0; j < 4; j++){
        switch(j){
        case 0:
            l = 'S';
            break;
        case 1:
            l = 'H';
            break;
        case 2:
            l = 'C';
            break;
        case 3:
            l = 'D';
            break;
        }
        for(i = 0; i < 13; i++){
            if(!count[j][i]){
                printf("%c %d\n", l, i + 1);
            }
        }
    }
}