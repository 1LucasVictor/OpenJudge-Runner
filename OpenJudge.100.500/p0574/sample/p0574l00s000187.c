#include<stdio.h>
int main()
{
    char t[4];
    scanf("%s",&t);

    if(t[0]==t[1]|| t[1]==t[2]||t[2]==t[3]){
        printf("Bad\n");
    }
    else{
        printf("Good\n");
    }
    return 0;


}
