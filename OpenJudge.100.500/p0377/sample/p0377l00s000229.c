#include<stdio.h>
#include<string.h>
void inputcards(char type, int number);

int main(void){
    int n, i, number = 0, x=0, array[53], d;
    char type = 'a';
    for(i = 1; i <= 52; i ++){
        array[i] = 0;
    }
    scanf("%d", &n);
    for(i = 1 ;i <= n ;i++){
        scanf("%s %d", &type, &number);
        if(type == 'S'){
            x = 0;
        } else if(type == 'H'){
            x = 1;
        } else if(type == 'C'){
            x = 2;
        } else if(type == 'D'){
            x = 3;
        }
        array[x * 13 + number] = 1;
        }
    
    for(i = 1; i <= 52; i++){
        if(array[i] == 0){
            if(0 < i && i < 14){
                type = 'S';
            } else if(13 < i && i < 27){
                type = 'H';
            } else if(26 < i && i < 40){
                type = 'C';
            } else if(39 < i && i < 53){
                type = 'D';
            }
        d = i % 13;
        if(d == 0) d = 13;

        switch(type){
            case 'S':
                printf("S %d\n", d);
                break;
            case 'H':
                printf("H %d\n", d);
                break;
            case 'C':
                printf("C %d\n", d);
                break;
            case 'D':
                printf("D %d\n", d);
                break;
        }
    }
    }
    return 0;
}