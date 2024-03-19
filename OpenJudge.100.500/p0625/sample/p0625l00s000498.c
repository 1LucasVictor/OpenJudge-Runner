#include <stdio.h>

int main(){

    int angka1;
    int angka2;

    scanf("%d",&angka1);
    scanf("%d",&angka2);

    if (angka1>8 || angka2>8){
        printf(":(");
    }else{
        printf("Yay!");
        }

    return 0;
}
