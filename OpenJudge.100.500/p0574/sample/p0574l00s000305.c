#include<stdio.h>
int main()
{
    char a[3];
    scanf("%s",a);
    if(a[0]==a[1]){printf("Bad");}
    else if(a[1]==a[2]){printf("Bad");}
    else if(a[2]==a[3]){printf("Bad");}
    else{printf("Good");}
    return 0;  

}
