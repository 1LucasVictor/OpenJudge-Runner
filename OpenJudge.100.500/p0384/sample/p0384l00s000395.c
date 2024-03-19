#include<stdio.h>
#include<string.h>
int main(){
    char c;
    while((c = getchar())!= EOF){
        if(isupper(c)){
            printf("%c", tolower(c));
        }else if(islower(c)){
            printf("%c", toupper(c));
        }else printf("%c", c);
    }
return 0;
}

