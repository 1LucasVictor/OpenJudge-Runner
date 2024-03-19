#include<stdio.h>
int main(void){
char str[10];
scanf("%s",str);

if(
(str[0]==str[1]&&str[2]==str[3]&&str[0]!=str[2])
||(str[0]==str[2]&&str[1]==str[3]&&str[0]!=str[1])
||(str[0]==str[3]&&str[1]==str[2]&&str[0]!=str[1])
)
printf("Yes");
else
printf("No");

return 0;
}