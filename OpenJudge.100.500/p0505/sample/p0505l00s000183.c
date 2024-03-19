/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int h,n,sum=0;
    scanf("%d %d",&h,&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    sum+=a[i];
    }
    if(sum>=h)
    printf("Yes");
    else
    printf("No");
}
