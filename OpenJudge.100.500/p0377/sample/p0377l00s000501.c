#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char    buf[8];
    char    *pbuf;
    char    suit;
    unsigned int    n, rank, ii;
    unsigned short  s = 0, h = 0, c = 0, d = 0;
    
    fgets(buf, sizeof(buf), stdin);
    n = atoi(buf);
    
    for(ii = 0; ii < n; ii++){
        fgets(buf, sizeof(buf), stdin);
        suit = buf[0];
        pbuf = &buf[2];
        rank = atoi(pbuf);
        switch(suit){
            case 'S':
                s |= 1 << (rank - 1);
                break;
            case 'H':
                h |= 1 << (rank - 1);
                break;
            case 'C':
                c |= 1 << (rank - 1);
                break;
            case 'D':
                d |= 1 << (rank - 1);
                break;
            default:
                break;
        }
    }
    
    for(ii = 0; ii < 13; ii++){
        if((s >> ii) % 2 == 0){
            printf("S %d\n", ii + 1);
        }
    }
    for(ii = 0; ii < 13; ii++){
        if((h >> ii) % 2 == 0){
            printf("H %d\n", ii + 1);
        }
    }
    for(ii = 0; ii < 13; ii++){
        if((c >> ii) % 2 == 0){
            printf("C %d\n", ii + 1);
        }
    }
    for(ii = 0; ii < 13; ii++){
        if((d >> ii) % 2 == 0){
            printf("D %d\n", ii + 1);
        }
    }

    return 0;
}
