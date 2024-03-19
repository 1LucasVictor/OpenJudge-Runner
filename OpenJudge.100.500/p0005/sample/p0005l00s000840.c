#include <stdio.h>
int main(void){
    char str[100],work;
    int i,n,j,t;
    scanf("%s",str);
    n = strlen(str);
    t=n;
    if(n%2!=0){
        n=n-1;
        j=n/2;
    }else{
        j=n/2;
    }
    for(i=0;i<j;i++){
        work=str[i];
        str[i]=str[n-1];
        str[n-1]=work;
        n--;
    }
    for(i=0;i<t;i++){
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}