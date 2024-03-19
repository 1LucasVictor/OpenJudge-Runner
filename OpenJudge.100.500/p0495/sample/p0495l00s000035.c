#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,c=0;
    char a[3];
    scanf("%s",a);
    for(i=0;i<3;i++){
        if(a[i]=='A'&&a[i+1]=='B'||a[i]=='B'&&a[i+1]=='A'){
            c=1;
            break;
        }

    }
    if(c==1)
        printf("Yes\n");
    else
        printf("No\n");
}
