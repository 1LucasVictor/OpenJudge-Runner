#include <stdio.h>
#define MAX 1000
int main()
{
        char input[MAX];
        int output = 0;
        int count = 0;

        while ( 1 )
        {
                scanf("%s", input);
                if ( input[0] == '0' )
                {
                        return 0;
                }

                while  ( input[count] != '\0' )
                {
                        output = output + input[count] - 48;
                        count = count + 1;
                }

                printf("%d\n", output);
                output = 0;
                count = 0;
        }
        return 0;
}