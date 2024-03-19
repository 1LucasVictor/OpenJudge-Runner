#include <stdio.h>

int main(){
    int bil1, bil2;
    int hasil1,hasil2,hasil3;
    scanf("%d %d",&bil1,&bil2);
    hasil1 = bil1 + bil2;
    hasil2 = bil1 - bil2;
    hasil3 = bil1 * bil2;
    if(hasil1>=hasil2&&hasil1>=hasil3){
        printf("%d",hasil1);
    }
    else if(hasil2>=hasil1&&hasil2>=hasil3){
        printf("%d",hasil2);
    }
    else{
        printf("%d",hasil3);
    }
    return 0;
}