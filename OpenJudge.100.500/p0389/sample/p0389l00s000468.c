#include<stdio.h>
#include<string.h>
#define C 201
void reset();
int a;
char n[C],cp1[C],cp2[C],cp[C];

main()
{
	int m,c1,c2,c3,h,len;
	while(1){
		scanf("%s",n);
		if(n[0]=='-')break;
		len=strlen(n);
		
		reset();
		
		scanf("%d",&m);
		for(c1=0;c1<m;c1++){
			scanf("%d",&h);
			for(c2=0;c2<h;c2++){
				cp1[c2]=n[c2];
			}
			for(c2=h,c3=0;c2<=len-1;c2++,c3++){
				cp2[c3]=n[c2];
			}
			strcat(cp2,cp1);
			strcpy(cp,cp2);
			strcpy(n,cp);
			reset();
		}
		puts(n);
	}
	return 0;
}

void reset(){
	for(a=0;a<C;a++){
		cp [a]='\0';
		cp1[a]='\0';
		cp2[a]='\0';
	}
}