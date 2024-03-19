#include <stdio.h>

int main()
{
    int R[100];
    int in[100];
    int n, j, m, l, i;

    m =0;
    l =0;

    for (i=0; i<100; i++){
        R[i] = 0;
    }

    i=0;
    while ((scanf("%d", &in[i]))!=EOF){
        i++;
        if (i==99) break;
    }

    R[0] = in[0];

    for (int k=0; k<i; k++){


        if (in[k] == 0) {
            for ( j=0; j<100; j++){
                if (R[j] == 0) break;
            }
            printf("%d\n", R[j-1]);
            R[j-1] = 0;
        }else{
            for (j=0; j<100; j++){
                if (R[j] == 0) break;
            }
            R[j] = in[k];
        }


        if (R[0] == 0) break;

    }

    return 0;
}

