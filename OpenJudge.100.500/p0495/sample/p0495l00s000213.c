#include <stdio.h>
#include <math.h>

int main()
{
    char a,b,c;
    scanf("%c%c%c",&a,&b,&c);
    if((a=='A'&&b=='B')||(a=='A'&&c=='B')||(b=='A'&&a=='B')||(b=='A'&&c=='B')||(c=='A'&&a=='B')||(c=='A'&&b=='B'))    printf("Yes");
    else printf("No");
    return 0;

}
