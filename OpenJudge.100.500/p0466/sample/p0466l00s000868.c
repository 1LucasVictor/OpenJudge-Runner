#include <stdio.h>
int main(void)
{
    char a[10];
    char b[11];
    int i;
    scanf("%s",&a);
    scanf("%s",&b);
    for(i=0;i<10;i++){
        if(a[i]=='\0'){
            printf("Yes\n");
            break;
        }
        else if(a[i]!=b[i]){
            printf("No\n");
            break;
        }
    }
    return 0;
}