#include<stdio.h>
int main(void){
    int i;
    int count=0;
    char text[3];
    scanf("%s",text);
for(i=0;i<3;i++){
    if(text[i]=='1')
        count++;
}
    printf("%d\n",count);
}