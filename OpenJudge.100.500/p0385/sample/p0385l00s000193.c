#include<stdio.h>

int main(void){

char str[1005];
int i,sum;
for(i=0;i<1005;i++)str[i]='\n';

while(1){
scanf("%s",str);
if(str[0]=='0'){break;}
sum=0;
i=0;
while(1){
	if(str[i]=='\n'){break;}
	switch(str[i]){
	case '9':sum++;
	case '8':sum++;
	case '7':sum++;
	case '6':sum++;
	case '5':sum++;
	case '4':sum++;
	case '3':sum++;
	case '2':sum++;
	case '1':sum++;
	}
	i++;
}
	printf("%d\n",sum);
}

	return 0;
}