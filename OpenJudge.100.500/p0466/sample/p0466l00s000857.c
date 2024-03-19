#include <stdio.h>
#include <string.h>

int main(){

char s[11];
char t[12];


scanf("%s", s);
scanf("%s", t);

int scounter = 0;
int a;
for(a = 0; s[a] != '\0';a++){
    scounter++;
}

int flag = 0;
int i;

for(i = 0; i < scounter ;i++){
    if(s[i] != t[i]){
        flag = 1;
    }
}

if (t[scounter] == '\0'){
    flag = 1;
}


if(flag == 1){
    printf("%s", "No");
}else {
    printf("%s", "Yes");
}

}