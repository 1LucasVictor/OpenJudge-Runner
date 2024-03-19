/* 201604270727 */
 
#include <stdio.h>
 
main(void)
{
long s;
scanf("%d",&s);
printf("%d:%d:%d\n",s/3600,(s%3600)/60,s%60);

}