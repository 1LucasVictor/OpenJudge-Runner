#include<stdio.h>

int main() {
    int i,a,b;
    char str[4];
    a=0; b=0;
    scanf("%s",str);
    for(i=0;i<3;i++) {
        if(str[i]=='A')
            a++;
        if(str[i]=='B')
            b++;
    }
    if(a==3 || b==3)
        printf("No\n");
    else
        printf("Yes\n");


    return 0;
}
