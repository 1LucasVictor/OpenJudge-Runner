#include <stdio.h>

int main()
{
    int l, r;
    int i, j;
    long ijmod;
    int min = 2019;

    char buf[256];
    fgets(buf, 256, stdin);
    sscanf(buf, "%d %d", &l, &r);

    if((r -l)/673 >= 1){ //2019 = 673 / 3
        //printf("673 must included.\n");
        printf("%d", 0);
    }else{
        for (i = l; i <= r-1; i++){
            for (j = i+1; j <= r; j++){
                ijmod = (i * j) % 2019;
                if (min > ijmod){
                    //printf("i = %d j = %d : change %d -> %ld\n", i, j ,min, ijmod);
                    min = ijmod;
                }
            }
        }
        printf("%d", min);
    }

}
