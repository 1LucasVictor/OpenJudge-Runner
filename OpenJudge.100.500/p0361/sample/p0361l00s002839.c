#include <stdio.h>

/*
????¨?
?§???????????????? SS ???????????????????????§???hh:mm:ss ?????¢?????????????????????????????????????????????????????§???hh ????????????mm ??? 60 ???????????????ss ??? 60 ??????????§???¨????????????

Input
SS ???1???????????????????????????

Output
hh???mm???ss ??? :(?????????)???????????§1???????????????????????????????????°??????1????????´??????0 ????????????2?????¨???????????????????????????????????????

*/

int main( void )
{
    int ss, iH, iM ,iS;

    scanf( "%d", &ss );

	iS = ss % 60;
	ss = ( ss - iS ) / 60;
	
	iM = ss % 60;
	ss = ( ss - iM ) / 60;
	
	iH = ss;

    printf( "%d:%d:%d\n", iH, iM, iS );

    return 0;
}