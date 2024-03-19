#include <stdio.h>

int main(void){
    char S[200001];
    char T[200001];

    int num = 0;

    scanf("%s", S);
    scanf("%s", T);

    int i = 0;
    while(*(S+i)!='\0'){
        if(*(S+i)!=*(T+i)){
            num++;
        }
        i++;
    }

    printf("%d\n",num);

    return 0;
}