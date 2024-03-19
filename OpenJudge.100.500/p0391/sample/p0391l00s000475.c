#include<stdio.h>
#include<string.h>
#define STRINGLENGTH 1001
int main (void){
    int a,b,q;
    char sentence[STRINGLENGTH];
    char str[STRINGLENGTH];
    scanf("%s",str);
    scanf("%d",&q);

    for (int i = 0; i < q; i++)
    {
        char order[8]={0};
        scanf("%s",order);
        if(strstr(order,"replace") != NULL ){
            scanf("%d %d %s",&a,&b,sentence);
            for (int i = a, j=0; i <=b ; i++,j++){
                str[i] = sentence[j];
            }   
        }
        if(strstr(order,"print") != NULL ){
            scanf("%d %d",&a,&b);
            for (int i = a; i <= b; i++){
                printf("%c",str[i]);
            }
            printf("\n");
        }
        if(strstr(order,"reverse") != NULL ){
            scanf("%d %d",&a,&b);
            char hoge;
            for (int i = a,j = 0; j <=(b-a)/2 ; i++,j++){
                hoge = str[i];
                str[i] = str [b-j];
                str [b-j] = hoge;
            }
        }        

    }
    return 0;
}

