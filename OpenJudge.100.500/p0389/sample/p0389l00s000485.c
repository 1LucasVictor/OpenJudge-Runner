#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int m;  //?????£??????????????°
    int h;  //?????£?????????????????????
    int len;    //??????
    int i;  //??°??????????????°
    int j;  //??°?????????
    char ch[201];   //??????????????????
    char tmp1[201]; //???????????????
    char tmp2[201]; //???????????????
    char *pch;
    char *ptmp1;
    char *ptmp2;
    
    for(i = 0; i < 201; i++)
    {
        ch[i] = 0;
        tmp1[i] = 0;
        tmp2[i] = 0;
    }
    
    
    while(1)
    {
        scanf("%s", ch);
        len = strlen(ch);
        if(strstr(ch, "-"))
        {
            break;
        }
        
        scanf("%d", &m);
        pch = ch;
        ptmp1 = tmp1;
        ptmp2 = tmp2;
        for(i = 0; i < m; i++)
        {
            scanf("%d", &h);
            strncpy(ptmp1, pch, h);
            strncpy(ptmp2, (pch + h), len - h);
            
            //printf("tmp1 %s\n", tmp1);
            //printf("tmp2 %s\n", tmp2);
            
            strcpy(ch, strcat(tmp2, tmp1));
            //printf("ch %s\n", ch);
            
            for(j = 0; j < 201; j++)
            {
                tmp1[j] = 0;
                tmp2[j] = 0;
            }
        }
        printf("%s\n", ch);
    }
    return 0;
}