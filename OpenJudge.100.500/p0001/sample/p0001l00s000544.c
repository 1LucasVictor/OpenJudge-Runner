#include <stdio.h>
int main(void){
    char line[1024];
    while(fgets(line, sizeof(line),stdin) != NULL){
        int a,b,c,i=0;
        sscanf(line,"%d %d",&a,&b);
        c = a+b;
        while(c>=10) {
            c/=10;
            i++;
        }
        printf("%d\n",i+1);
    }
}