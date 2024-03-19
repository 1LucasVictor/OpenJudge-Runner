#include <stdio.h>

int main(){
char first[256];
char second[256];
int count =0;

scanf("%s",first);
scanf("%s",second);

for(int i=0;first[i]!='\0';i++){
    if (first[i] !=second[i])
    count++;
}
printf("%d\n",count);

return 0;
}