
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>


int main()
{
        char numbuff[100000+1];
        long long int numbers[1000];
        int numnum;
        long long int i,j;
        long long int L, R;
        int inputc;


        numnum = 0;
        while( (inputc = getc(stdin)) != EOF ) {
                if( inputc == ' ' || inputc == '\n' ) {
                        numbuff[j]  = '\0';
                        numbers[numnum++] = atoll(numbuff);
                        j=0;
                        continue;
                }
                else {
                        numbuff[j++] = inputc;
                }
        }
#ifdef DBG
        for( int k =0; k < numnum; k++ ) { printf("<%lld>", numbers[k]); } printf("\n");
        printf("get numbuff\n");
#endif

        L = numbers[0];
        R = numbers[1];

        L = L%2019;
        R = R%2019;
        long long int TMP;
        if( L > R ) {
                TMP = L;
                L = R;
                R = TMP;
        }

#ifdef DBG
        printf("L=%lld R=%lld\n", L, R );
#endif
        int tmpamari;
        int min_amari = 2019;
        for( i = L; i < R; i++ ) {
                for( j = i+1; j <= R; j++ ) {
                                tmpamari = (i*j)%2019;
                                if( tmpamari <= min_amari ) {
                                        min_amari = tmpamari;
                                }

                }
        }
        printf("%d\n", min_amari );
        return 0;


}