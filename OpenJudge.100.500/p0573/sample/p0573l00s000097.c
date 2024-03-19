#include <stdio.h>
#include <string.h>

int main(void){
    int i;
    char str[4];
    scanf("%s", str);

    if(str[0] ==str[1]&& str[2]== str[3] &&str[1] !=str[2]){
        printf("Yes");
    }else if(str[0]==str[2]&&str[1] ==str[3] && str[0]!=str[1] ){
        printf("Yes");
    }else if(str[0]==str[3]&&str[1]==str[2]&& str[0]!=str[1] ){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}