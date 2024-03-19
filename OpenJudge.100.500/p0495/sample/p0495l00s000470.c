#include <stdio.h>
#include <string.h>

int main()
{

    char s[ 3 ] ;
    scanf(" %s", s);

    if(s[ 0 ] == s[ 1 ]  && s[ 0 ] != s[ 2 ] ){
        printf("Yes");
    }
    else if(s[ 0 ] != s[ 1 ] && s[ 1 ] == s[ 2 ] ){
        printf("Yes");
    }
    else if(s[ 0 ] == s[ 2 ]  && s[ 1 ] != s[ 0 ]){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
