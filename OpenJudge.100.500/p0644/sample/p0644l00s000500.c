#include<stdio.h>
#include<stdlib.h>
int main()
{  	
  	int s1;
	int s2;
	int s3;
  	int num;
  	//printf("ok");
  	scanf("%d",&num);
  	//printf("%d\n",num);
  	//scanf("%s%s%s",s1,s2,s3);
  	//printf("%s\n",s1);
  	//printf("%s\n",s2);
  	//printf("%s\n",s3);
  	//printf("nyu=%d",argv[0][0]);
  	//int num;
  	//scanf("%d",&num);
  	//printf("num=%d\n",num);
	s1=num/100;
	s2=num%100/10;
	s3=num%10;
    
  	//printf("s1%d\n",s1);
  	//printf("s2%d\n",s2);
  	//printf("s3%d\n",s3);
	int ans=s1+s2+s3;
	printf("%d\n",ans);
	return 0;
}