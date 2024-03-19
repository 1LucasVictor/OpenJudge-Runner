/*************************************************************
 * ?´???°?????°
 ************************************************************/
#include <stdio.h>

int main(){
        int  a, b, c;
        int  i, count = 0;
        char line[30];

        fgets(line, sizeof(line), stdin);
        sscanf(line, " %d %d %d", &a, &b, &c );

        for(i = 1; i < c; i++ ){
                if(c % i == 0 && i >= a && i <= b ) count++;
        }

        printf("%d\n", count );

        return 0;
}