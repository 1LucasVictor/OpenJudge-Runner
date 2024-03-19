 #include<stdio.h>
 #include<string.h>
 #include <stdlib.h>



int main(void){
char s[5];
scanf("%s",s);

if(s[0]==s[1]&&s[1]==s[2]&&s[2]==s[3]){printf("No\n");}
else{printf("Yes");}
}
