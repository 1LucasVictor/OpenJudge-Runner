#include<stdio.h>
int main(void){
    char word;

    while(1){
        scanf("%c",&word);

        if('a'<=word && word<='z'){
            printf("%c",word-32);
            //-32
        }else if('A'<=word && word<='Z'){
            printf("%c",word+32);
            //+32
        }else if(word=='\n'){
            printf("\n");
            break;
        }else{
            printf("%c",word);
        }
    }
  
    return 0;
}
