#include<stdio.h>
#include<math.h>

int main(){

    int a, b, n, total;

    int precount[20] = {};
    for (a=0; a<=9; a++){
        for (b=0; b<=9; b++){
            ++precount[a+b];
        }
    }

    while ( (fscanf(stdin, "%d", &n)) != EOF){
        total = 0;
        for (a=0; a<=9; a++){
            for (b=0; b<=9; b++){
                int v = n - a - b;
                if ( 0 <= v && v <= 18){
                    total += precount[v];
                }
            }
        }
        printf("%d\n", total);
    }

    return 0;
}