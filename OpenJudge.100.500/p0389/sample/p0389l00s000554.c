#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char word[400],word2[400],word3[400];
    int h,i,j,r,sum;
    while (1) {
        scanf("%s",word);
        sum = strlen(word);
        if(word[0]=='-'){
            break;
        }
        scanf("%d",&h);
        for(i=0;i<h;i++){
            scanf("%d",&r);
            strcpy(word2,word);
            strcpy(word3,word);
            strcat(word2,word3);
            for(j=0;j<sum*2;j++){
                word2[j]=word2[j+r];
            }for(j=0;j<sum;j++){
                word[j]=word2[j];
            }
        }
        for(i=0;i<sum;i++){
            printf("%c",word[i]);
        }
        printf("\n");
    }
    return 0;
}