/* Shuffle */
#include <stdio.h>

int main()
{
    char n[201];
    int m, h, i, j, k, num, temp;

    while(1){
        scanf("%s", &n);
        if(n[0] == '-' ){ break; }
        for(num=0; num<201 ; num++){
            if(n[num] == '\0'){ break; }
        }
        scanf("%d", &m);
        for(i=0; i<m; i++){
            scanf("%d", &h);
            for(j=0; j<h; j++){
                temp = n[0];
                for(k=0; k<num; k++){
                    n[k] = n[k+1];
                }
                n[num-1] = temp;
            }
        }
        printf("%s\n",&n);
    }
    return 0;
}
