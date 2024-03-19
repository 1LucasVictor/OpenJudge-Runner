#include<stdio.h>

int main(){
    char s[110000];
    int N, i;
    int cont0 = 0, cont1 = 0;

    for(i=0; i<110000; i++){
        scanf("%s", &s[i]);
        if(s[i] == '\0'){
            break;
        }
        if(s[i] == '0'){
            cont0 += 1;
        }else{
            cont1 += 1;
        }
    }

    if(cont0 > cont1){
        printf("%d", cont1*2);
    }else{
        printf("%d", cont0*2);
    }

    return 0;
}