#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char s[10];
    char a='ABC';
    //char b='ARC';
    scanf("%s",&s);
    if (s!=a){
        printf("ARC\n");
    }
    else{
        printf("ABC\n");
    }

    return 0;

}
