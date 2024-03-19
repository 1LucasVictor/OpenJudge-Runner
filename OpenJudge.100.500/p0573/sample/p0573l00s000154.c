#include <stdio.h>
int main()
{
    char s[4];
    
    scanf("%s",s);
    
    int i,j,cnt1=0,cnt2=0;
    
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(s[i]==s[j])
            cnt1++;
            else
            cnt2++;
        }
    }
    
    if(cnt1==8 && cnt2==8)
    printf("Yes");
    else
    printf("No");
}