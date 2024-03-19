#include<stdio.h>

int main(){

        int input;
        scanf("%d",&input);

        int i;

        int num = input / 500;
        int amari = input % 500;

        int num2 = amari / 5;

        num = num *1000;
        num2 = num2 *5;

        int sum = num + num2;

        printf("%d",sum);

        return 0;

}