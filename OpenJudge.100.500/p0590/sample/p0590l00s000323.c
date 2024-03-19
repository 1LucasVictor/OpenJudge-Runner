#include<stdio.h>

int a = 0;
int max = 0;
int min = 0;
int sc();

int main(int argc, char const *argv[]){
    int k = 0;

    scanf("%d", &a);
    max = a;
    min = a;

    sc();
    sc();
    sc();
    sc();

    scanf("%d", &k);
    if (max - min <= k) {
        printf("Yay!\n");
    }else
    {
        printf(":(\n");
    }  
}

int sc(){
    scanf("%d", &a);
    if (a > max) {
        max = a;
    }else if (a < min) {
        min = a;
    }
}