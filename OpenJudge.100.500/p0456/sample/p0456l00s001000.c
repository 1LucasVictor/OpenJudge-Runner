#include<stdio.h>
#include<string.h>
int main(void){
    char a[50000];
    char b[50000];
    int i, j, count=0;

    (void)scanf("%s %s", a, b);

    j = (int)strlen(a);

    for(i=0; i<j; i++){
        if(a[i] == b[i]){
            count++;
        }
    }

    count = j - count;

    printf("%d\n",count);

    return 0;
}