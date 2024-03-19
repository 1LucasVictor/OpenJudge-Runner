#include <stdio.h>
#include<string.h>
char word[1500];
int main() {
scanf("%[^\n]s",word);
int len = strlen(word);
for(int i=0;i<len;i++){
    if(word[i]>=65 && word[i]<=90){
        word[i] += 32;
    }
   else if(word[i]>=97 && word[i]<=122){
        word[i] -= 32;
    }
}
printf("%s\n",word);
    return 0;
}
