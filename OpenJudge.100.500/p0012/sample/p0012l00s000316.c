#include <stdio.h>
#include <stdlib.h>

int stack[10];
int num = 0;

int pop()
{
        int tmp = stack[num - 1];
        num = num - 1;
        return tmp;
}

void push( int x )
{
        stack[num] = x;
        num = num + 1;
}

int main()
{
        int number;

        while ( scanf("%d", &number) != EOF )
        {
                if ( number == 0 )
                {
                        fprintf( stdout, "%d\n", pop() );
                }
                else
                {
                        push( number );
                }
        }

        return 0;
}