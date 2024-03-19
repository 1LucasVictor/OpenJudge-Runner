#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[1001], p[1001], o[10];
    int a, b, q, i;

    scanf("%s", &str);
    scanf("%d", &q);

    while(q--)
    {
        scanf("%s %d %d", &o, &a, &b);

        if(!strcmp(o, "replace"))
        {
            scanf("%s", &p);
            for(i = a; i <= b; ++i)
            {
                str[i] = p[i - a];
            }
        }

        if(!strcmp(o, "reverse"))
        {
            for(i = a; i <= b; ++i)
            {
                p[i - a] = str[i];
            }

            for(i = a; i <= b; ++i)
            {
                str[i] = p[b - i];
            }
        }

        if(!strcmp(o, "print"))
        {
            for(i = a; i <= b; ++i)
            {
                printf("%c", str[i]);
            }

            printf("\n");
        }

        /*
        if(order == "replace")
        {
            scanf(" %d %d %s", &a, &b, &p);

            int i;
            for(i = a; i <= b; ++i)
            {
                str[i] = p[i - a];
            }
        }

        if(order == "print")
        {
            scanf(" %d %d", &a, &b);

            int i;
            for(i = a; i <= b; ++i)
            {
                printf("%c", str[i]);
            }

            printf("\n");
        }

        if(order == "reverse")
        {
            scanf(" %d %d", &a, &b);

            int i;
            for(i = 0; i < (b - a) / 2; ++i)
            {
                char temp = str[i + a];
                str[i + a] = str[b - i];
                str[b - i] = temp;
            }
        }
        */
    }

    return 0;
}