#include <stdio.h>
#include <string.h>

int main()
{
        char string[1000];
        int operation_number = 0;
        char operation[10];
        char p[1000];
        char tmp;
        int a = 0, b = 0, i = 0;

        scanf("%s", string);
        scanf("%d", &operation_number);

        while ( operation_number > 0 )
        {
                scanf("%s %d %d", operation, &a, &b);
                if ( strcmp( operation, "replace" ) == 0 )
                {
                        scanf("%s", p);
                }

                if ( strcmp( operation, "print" ) == 0 )
                {
                        while ( a <= b )
                        {
                                printf("%c", string[a]);
                                if ( a == b )
                                        printf("\n");
                                a = a + 1;
                        }
                }
                else if ( strcmp( operation, "reverse" ) == 0 )
                {
                        while ( a <= b )
                        {
                                tmp = string[b];
                                string[b] = string[a];
                                string[a] = tmp;
                                b = b - 1;
                                a = a + 1;
                        }
                }
                else if ( strcmp( operation, "replace" ) == 0 )
                {
                        i = 0;
                        while ( a <= b )
                        {
                                string[a] = p[i];
                                a = a + 1;
                                i = i + 1;
                        }
                }
                operation_number = operation_number - 1;
        }

        return 0;
}