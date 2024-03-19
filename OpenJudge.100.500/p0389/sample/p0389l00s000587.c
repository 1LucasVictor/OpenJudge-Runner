#include<stdio.h>
#include<string.h>
int main(void){
    char A[201],buf[201];
    int n,i,h;
    while(1){
        scanf("%s",A);
        if(strcmp(A,"-")==0) break;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&h);
            strcpy(buf,A+h);
            strncat(buf,A,h);
            strcpy(A,buf);
        }
        printf("%s\n",A);
    }
    return 0;
}