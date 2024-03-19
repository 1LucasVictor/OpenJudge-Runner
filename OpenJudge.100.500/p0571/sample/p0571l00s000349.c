#include <stdio.h>

#define LENGTH 256

int main(void) {
    char input[LENGTH];
    int r, i, sum;
    int n[3];
    fgets(input, LENGTH-1, stdin);
    sscanf(input, "%d %d %d", &n[0], &n[1], &n[2]);
    int tr = n[0] * n[1];
    int ta = n[2];
    if(tr <= ta){
        printf("%d\n",tr);
    }else{
        printf("%d\n",ta);
    }
    return 0;
}