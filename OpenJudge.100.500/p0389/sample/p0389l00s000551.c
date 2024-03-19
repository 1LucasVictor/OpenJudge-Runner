#include<stdio.h>
#include<string.h>
int main(){
    int i, r, n, n2, z, x;
    char moji1[201] = {}, tmp1, tmp2;

    for(;;){
        scanf("%s",moji1);
        if( moji1[0] == '-'){
            break;
        }
        scanf("%d", &n);

        for( i = 0; i < n; i++ ){
            scanf("%d", &n2);
            for( r = 0; r < n2; r++ ){
                for( z = 0; z < strlen( moji1 ); z++ ){
                   if( z == 0 ){
                    tmp1 = moji1[z];
                   }else if( z == strlen(moji1) - 1 ){
                        moji1[z - 1] = moji1[z];
                        moji1[z] = tmp1;
                    }else{
                        moji1[z - 1] = moji1[z];
                        tmp2 = moji1[z];
                   }
                }
            }
        }

        printf("%s\n", moji1);
        x = strlen( moji1 );
        memset( moji1, '\0', x );
    }
    return 0;
}