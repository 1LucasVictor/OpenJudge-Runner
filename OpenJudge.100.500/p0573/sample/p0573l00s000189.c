#include <stdio.h>

int main(void){
    int flag = 1, i=1;
    char input[5];
    scanf("%s", input);
    while(input[0]!=input[i]){
        i++;
    }
    if(i==1&&input[2]==input[3]&&input[1]!=input[2])
    printf("Yes\n");
    else if(i==2&&input[1]==input[3]&&input[1]!=input[2])
    printf("Yes\n");
    else if(i==3&&input[2]==input[1]&&input[1]!=input[0])
    printf("Yes\n");
    else
    printf("No\n");
    return 0;
}