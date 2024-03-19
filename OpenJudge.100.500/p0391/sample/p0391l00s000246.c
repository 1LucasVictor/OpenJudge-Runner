#include<stdio.h>

int main(void){
    char str[1000] = {}, tmp_str[1000] = {};
    int count;
    char order[10];
    int a, b;
    char p[1000];
    scanf("%s %d", str, &count);
    
    for(int i=0; i<count; i++){
        scanf("%s %d %d", order, &a, &b);
        
        strcpy(tmp_str, str);
        
        if(strcmp(order, "print") == 0){
            for(int j=a; j<=b; j++){
                printf("%c", str[j]);
            }
            printf("\n");
        }else if(strcmp(order, "reverse") == 0){
            for(int j=a; j<=b; j++){
                str[j] = tmp_str[a+b-j];
            }
        }else{
            scanf("%s", p);
            strncpy(str+a, p, b-a+1);
        }
    }
    return 0;
}
