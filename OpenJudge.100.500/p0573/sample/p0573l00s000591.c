 #include<stdio.h>

int main(){
	char str[5];
	char a,b='\0';
  int i,c=1,d=0;;
  scanf("%s",str);
	a=str[0];
	for(i=1;i<4;i++){
		if(str[i]==a)c++;
  	if(str[i]!=a && b=='\0'){
  		b=str[i];
  		d++;
  	}
  	else if(str[i]==b)d++;
  }
	if(c==d)printf("Yes\n");
	else printf("No\n");
	return 0;
}