#include <stdio.h>
#include <string.h>

int main()
{
        char str[200][200];
        char tmp1[200] = { 0 };
        char tmp2[200] = { 0 };
        int input_number = 0, str_number = 0, str_len = 0;
        int shuffle_number = 0, shuffle_NO = 0, count = 0;

        while ( 1 )
        {
                scanf("%s", str[str_number]);
                if ( str[str_number][0] == '-' )
                {
                        break;
                }

                scanf("%d", &shuffle_number);
                str_len = strlen(str[str_number]);

                while ( shuffle_number > 0 )
                {
                        scanf("%d", &shuffle_NO);
                        strcpy(tmp1, str[str_number]);
                        strcpy(tmp2, tmp1);
                        strcpy(tmp1, tmp2+shuffle_NO);
                        strncat(tmp1, tmp2, shuffle_NO );
                        strcpy(str[str_number], tmp1);

                        shuffle_number = shuffle_number - 1;
                }

                str_number = str_number + 1;

        }

        while ( count < str_number )
        {
                printf("%s\n", str[count]);
                count++;
        }

        return 0;
}