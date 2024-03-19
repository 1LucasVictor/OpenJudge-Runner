#include <stdio.h>
//#include <string.h>

int main() {
    char S[10],T[11];
    //long len_S;
    int i;
    
    scanf("%s",S);
    scanf("%s",T);
    
    //len_S = strlen(S);
    
    for (i = 0;S[i] != '\0';i++){
        if (S[i] != T[i]){
            printf("No\n");
            return 0;
            //break;
        }
    }
    /*if (i == len_S){
        printf("Yes\n");
    }else{*/
    printf("Yes\n");
    //}
    
    /*if (strncmp(S,T,len_S) == 0){
            printf("Yes\n");
        }else{
            printf("No\n");
        }*/
    
    /*if (len_T != len_S + 1 || len_S < 1 || len_S > 10){
        printf("No\n");
    }else{
        if (strncmp(S,T,len_S) == 0){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }*/
    
    return 0;
}
