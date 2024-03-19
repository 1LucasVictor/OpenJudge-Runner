#include <stdio.h>
#include <string.h>

int main() {

    int n;
    scanf("%d",&n);

    //char s[4];
    //scanf("%s",s);
    
    printf("%d",(n%2==0) ? n/2: (n/2)+1);
    

    return 0;

}
