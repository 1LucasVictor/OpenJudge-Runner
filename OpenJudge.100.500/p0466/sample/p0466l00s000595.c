#include<stdio.h>
#include<string.h>

int length;
char idS[11];
char idT[10];

int check = 0;

int main(void){

    scanf("%s", idS);
    scanf("%s", idT);

    length = strlen(idS);
    for(int i=0; i<length; i++){
        if(idS[i] != idT[i]){
            printf("No\n");
            check = 1;
            break;
        }
    }

    if(check == 0)printf("Yes\n");

    return 0;
}