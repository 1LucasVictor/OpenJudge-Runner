#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    char b[100];
    scanf("%s",&a);
    scanf("%s",&b);
    int s=strlen(a);
    int i;
    int cnt=0;
    for(i=0;i<s;i++){
        if(a[i]!=b[i]){
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}
