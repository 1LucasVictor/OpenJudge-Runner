#include <stdio.h>
#include <math.h>

int main(void){
    int n, m;
    int d[5][2];
    int i, j, flag;
    int max;
    char str[5];
    scanf("%d %d", &n, &m);
    
    for(i = 0; i < m; i++){
        scanf("%d %d", &d[i][0], &d[i][1]);
    }
    
    max = pow(10, n);
    for(i = 0; i < max; i++){
        sprintf(str, "%d", i);
        //printf("%s\n", str);
        for(j = 0; j < m; j++){
            if(str[d[j][0]-1] != d[j][1] + '0') break;
        }
        if(j == m && max/10 <= i && max > i) break;
    }
    
    if(i == max) i = -1;
    //if(i == 0 && n != 1) i = -1;
    printf("%d", i);
    
    return 0;
}
    