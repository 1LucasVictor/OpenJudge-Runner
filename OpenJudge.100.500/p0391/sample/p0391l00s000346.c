#include<stdio.h>
#include<string.h>
int main(){
    char moji[1001] = {}, str[8] = {}, tmpstr, x[100] = {};
    int a, b, n, tmp, r, i, z, tmp2;
    scanf("%s", moji);
    scanf("%d", &n);
    for( i = 0; i < n; i++ ){
        scanf("%s %d %d", str, &a, &b);
        if( strcmp( str, "print" ) == 0 ){
            for( tmp = a; tmp <= b; tmp++ ){
                printf("%c", moji[tmp]);
                if( tmp == b ){
                    printf("\n");
                }
            }
        }else if( strcmp( str, "reverse" ) == 0 ){
              for( tmp = a, tmp2 = b; tmp < tmp2; tmp++, tmp2-- ){
                  tmpstr = moji[ tmp ];
                  moji[ tmp ] = moji[tmp2];
                  moji[ tmp2 ] = tmpstr;
              }
        }else{
            scanf("%s", x);
            r = 0;
            for( tmp = a; tmp <= b; tmp++ ){
                moji[tmp] = x[r];
                r++;
            }
        }
    }
    return 0;
}