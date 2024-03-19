#include<stdio.h>
char changesize(char a){
    if(65 <= a && a <= 90){
        return a + 32;
    }
    else if(97 <= a && a <= 122){
        return a - 32;
    }
    else{
        return a;
    }
    return 0;
}

int main(void){
    char a[1201];
    int i = 0;
    for (i = 0; i < 1200; i++)
    {
        a[i] = '\0';
    }
    fgets(a, sizeof(a), stdin);
    i = 0;
    while (a[i] != '\0'){
        printf("%c", changesize(a[i]));
        i++;
    }
    //printf("\n");
    return 0;
}
