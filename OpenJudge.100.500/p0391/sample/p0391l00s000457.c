#include <stdio.h>

int main() {

char str[1050] = {0};
char kai;
char ch[1050] = {0};
char mei[30] = {0};
char pl[1050]={0};
int i,j,k,l,m,n,o,p;

i=0;
while(1){
scanf("%c",&str[i]);
ch[i] = str[i];
//printf("str[%d] = %c\n",i,str[i]);

if(str[i] == '\n') {
break;
}

i++;
}

scanf("%d",&n);
scanf("%c",&kai);

j=0;
o=0;
k=l=0;
while(1) {

if(o==n) {
break;
}

scanf("%c",&mei[j]);
//printf("mei[%d] = %c\n",j,mei[j]);


if(mei[j] == '\n') {
o +=1;
if(mei[2] =='p') {
j=-1;
k = mei[8]-48;
l = mei[10]-48;

//printf("\nk=%d l=%d\n",k,l);

for(m=0;m<l-k+1;m++) {

//printf("str[%d]%c = mei[%d]%c\n",m+k,str[m+k],12+m,mei[12+m]);
str[m+k] = mei[12+m];
ch[m+k] = str[m+k];

}
}

else if(mei[2] == 'v') {
j=-1;
k=mei[8]-48;
l=mei[10]-48;

for(m=0;m<l-k+1;m++) {
//printf("str[%d]%c = ch[%d]%c\n",k+m,str[k+m],l-m,ch[l-m]);
str[k+m] = ch[l-m];
}
for(m=0;m<i;m++){
ch[m] = str[m];

}
}
else if(mei[0] = 'p') {
//printf("OK\n");
j=-1;
k=mei[6]-48;
l=mei[8]-48;
//printf("k=%d l=%d\n",k,l);
for(m=k; m<=l;m++) {
printf("%c" ,str[m]);
}
printf("\n");
}
}
j++;

}
return 0;

}