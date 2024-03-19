#include <stdio.h>
 
int main(void) {
    int cars[10];
    int carsnum=0;
    int sousa;
    while(!feof(stdin)) {
        scanf("%d",&sousa);
        if(feof(stdin))break;
        if(sousa==0) {
            carsnum--;
            printf("%d\n",cars[carsnum]);
        } else {
            cars[carsnum]=sousa;
            carsnum++;
        }
    }
    return 0;

}