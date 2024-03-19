#include<stdio.h>
#include<string.h>
int main(void){
    char a[200001];
    char b[200001];
    int i, j, count=0;

    (void)scanf("%s %s", a, b);

    j = (int)strlen(a);

    for(i=0; i<j; i++){
        if(a[i] != b[i]){
            count++;
        }
    }

    printf("%d\n",count);

    return 0;
}