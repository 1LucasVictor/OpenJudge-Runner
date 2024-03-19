#include<stdio.h>
int main(){
    unsigned short num;
    unsigned short i;
    unsigned short rank;
    unsigned char mark;
    unsigned char dia[13];
    unsigned char spade[13];
    unsigned char crabb[13];
    unsigned char hert[13];
    for(i = 0;i < 13;i++){
        dia[i] = 0;
        spade[i] = 0;
        crabb[i] = 0;
        hert[i] = 0;
    }
    scanf("%d", &num);
    for(i = 0;i < num;i++){
        scanf("%s %d", &mark, &rank);
        switch(mark){
        case 'D':
            dia[rank - 1] = 1;
            break;
        case 'S':
            spade[rank - 1] = 1;
            break;
        case 'C':
            crabb[rank - 1] = 1;
            break;
        case 'H':
            hert[rank - 1] = 1;
            break;
        default:;
        }
    }
    for(i = 0;i < 13;i++){
        if(spade[i] == 0){
            printf("S %d\n", i + 1);
        }
    }
    for(i = 0;i < 13;i++){
        if(hert[i] == 0){
            printf("H %d\n", i + 1);
        }
    }
    for(i = 0;i < 13;i++){
        if(crabb[i] == 0){
            printf("C %d\n", i + 1);
        }
    }

    for(i = 0;i < 13;i++){
        if(dia[i] == 0){
            printf("D %d\n", i + 1);
        }
    }
    return 0;
}
