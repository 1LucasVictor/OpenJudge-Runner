#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
        char buf[128]={0};
        char* p=NULL;
        int a = 0;
        int b = 0;

        memset(buf, 0, sizeof(buf));
        if(fgets(buf, sizeof(buf)-1, stdin)==NULL){
                return 1;
        }
        p = strtok(buf, " ");
        a = atoi(p);
        if(a<0){return 0;}

        p = strtok(NULL, " ");
        b = atoi(p);
        if(b<0){return 0;}

#ifdef DEBUG1
        printf("input: a=%d, b=%d\n", a, b);
#endif

        if(a%2==1 && b%2==1){
                printf("Odd\n");
        }
        else{
                printf("Even\n");
        }

        return 0;

}