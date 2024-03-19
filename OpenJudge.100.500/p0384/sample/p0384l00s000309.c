#include <stdio.h>
int main(){
char oomoji[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char komoji[]="abcdefghijklmnopqrstuvwxyz";
char c;
int i;
while(1){
scanf("%c",&c);
if (c=='\n')break;
for(i=0;i<26;i++){
    if(c==oomoji[i])c=komoji[i];
    else if (c==komoji[i])c=oomoji[i];
}
printf("%c",c);

}
printf("\n");
return 0;
}