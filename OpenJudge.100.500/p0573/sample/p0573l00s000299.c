#include  <stdio.h>
#include <string.h>

int main(){

char text[50];
int count1 = 0,count2 = 0,count;
int leng = 0;
int i=0;
int num = 0;

scanf("%s",text);
leng = strlen(text);

if(text[0]==text[1]){
        if(text[2]==text[3]&&text[0]!=text[2]){
                num = 1;
        }
}

if(text[0]==text[2]){
        if(text[1]==text[3]&&text[0]!=text[1]){
                num = 2;
        }
}

if(text[0]==text[3]){
        if(text[1]==text[2]&&text[0]!=text[1]){
                num = 3;
        }
}

if(num>0){
        printf("Yes\n");
}else{
        printf("No\n");
}

return 0;
}
