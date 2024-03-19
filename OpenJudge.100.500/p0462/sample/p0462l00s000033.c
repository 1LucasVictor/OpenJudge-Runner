#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
int compare(const void *a,const void *b){
    if(*(long long *)a>*(long long *)b)return 1;
    return -1;
}
int main(int argc, const char * argv[]) {
    unsigned long long a;
    scanf("%llu",&a);
    char b[5];
    scanf("%s",b);
    unsigned long long bd=0;
    if(b[3]=='0'&&b[4]=='0'){
        printf("%llu",a*(b[0]-'0'));
    }
    bd+=b[0]-'0';
    bd*=10;
    bd+=b[2]-'0';
    bd*=10;
    if(b[3]=='0'){
        bd/=10;
    }else{
        bd+=b[3]-'0';
        bd*=10;
    }
    unsigned long long ans=a*bd;
    if(b[3]=='0'){
        ans/=10;
    }else{
        ans/=100;
    }
    printf("%llu",ans);
    return 0;
}
