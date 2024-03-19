#include <stdio.h>
#include <string.h>
int main (){

char str[21],a[21];
int i,j,r;

scanf ("%s",str);

r=strlen(str);
j=strlen(str)-1;

for (i=0;i<r;i++){

a[i]=str[j];
j--;

}
for (i=0;i<r;i++){

printf("%c",a[i]);
}
printf ("\n");
return 0;
}
