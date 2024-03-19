#include<stdio.h>
int main() {
    char a,b,s;
    scanf("%c%c%c",&a,&b,&s);
    if(a=='1'&&b=='1'&&s=='1'){
        printf("3\n");
    } else if((a=='1'&&b=='1'&&s=='0')||(a=='1'&&b=='0'&&s=='1')||(a=='0'&&b=='1'&&s=='1')){
printf("2");}
    else if((a=='0'&&b=='0'&&s=='1')||(a=='0'&&b=='1'&&s=='0')||(a=='1'&&b=='0'&&s=='0')){
        printf("1\n");
    }else{
        printf("0\n");
    }
    return 0;
}