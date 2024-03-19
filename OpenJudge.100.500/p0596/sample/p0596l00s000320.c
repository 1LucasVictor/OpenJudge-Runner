#include <stdio.h>
#include <string.h>
char s[100000];
int i, f, count0, count1;
int main(void)
{
    scanf("%s", &s);
    i = strlen(s);
    for (f = 0; f < i; f++)
    {
        if (s[f] == '0')
        {
            count0++;
        }
        else
        {
            count1++;
        }
    }
if(count0<count1){
    printf("%d",i - (count1-count0));
}else{
    printf("%d",i-(count0-count1));
}
    

    return 0;
}