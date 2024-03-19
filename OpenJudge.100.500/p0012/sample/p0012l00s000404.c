#include <stdio.h>

#define TRAIN_STACK 10

// int[0] is array size
// int[1~] is data itself
// int[n] = 0 ; out of range

int pop ( int* array )
{
    if ( array[0] <= 0 )
    {
        return 0;
    }

    array[0] -= 1;
    return array[array[0] + 1];
}

int push ( int* array, int input )
{
    if ( array[0] >= TRAIN_STACK )
    {
        return 0;
    }

    array[0] += 1;
    array[array[0]] = input;

    return input;
}

int unshift ( int* array, int input )
{
    if ( array[0] >= TRAIN_STACK )
    {
        return 0;
    }

    int i;
    array[0] += 1;
    for ( i = array[0]; i > 1; i-- )
    {
        array[i] = array[i - 1];
    }
    array[1] = input;

    return input;
}

int shift ( int* array )
{
    if ( array[0] <= 0 )
    {
        return 0;
    }

    int i, retval = array[1];

    for ( i = 2; i <= array[0]; i++ )
    {
        array[i - 1] = array[i];
    }
    array[0] -= 1;

    return retval;
}

int main ( void )
{
    int stdinput, i;
    int instack[TRAIN_STACK + 1] = { 0 };
//    int outstack[TRAIN_STACK + 1] = { 0 };

    while ( scanf( "%d", &stdinput ) != EOF )
    {
        if ( stdinput <= 0 )
        {
//            push( outstack, pop( instack ) );
            printf( "%d\n", pop( instack ) );
        }
        else
        {
            push( instack, stdinput );
        }
    }

    /* 出力は同じなのに Wrong Answer になる
    for ( i = 1; i <= outstack[0]; i++ )
    {
        if ( outstack[i] != 0 )
        {
            printf( "%d\n", outstack[i] );
        }
    }
    */

    return 0;
}