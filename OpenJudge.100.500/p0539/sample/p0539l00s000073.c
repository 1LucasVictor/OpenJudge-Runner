#include<stdio.h>
#include<math.h>
#include<limits.h>
#include<assert.h>
#include<stdbool.h>
#include<stddef.h>
#include<stdint.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>

#include<ctype.h>
#include<time.h>
typedef long long ll;
#define pi 3.14159
int main()
{ 
int x,flag=0;
scanf("%d",&x);
for(int i=1;i<=9;i++){
for(int j=1;j<=9;j++){
if(i*j==x){flag=1;break;}}}
printf((flag==1)?"Yes":"No");



return 0;
}