
    #include<stdio.h>

int main()
{
	int a,b,c,i;
	scanf("%d",&i);
   while(i!=0){
	scanf("%d %d %d",&a,&b,&c);
	if (a > b && a > c)
		if(c*c==a*a+b*b)
		printf("YES\n");
	
	else
		printf("NO\n");
	
	else if(b > a && b > c)
		if(b*b==c*c-a*a)
		printf("YES\n");
	
	else 
		printf("NO\n");
	

	else
	if(a*a==c*c-b*b)
		printf("YES\n");
	
	else
		printf("NO\n");
	
	
	i--;
   }
return 0;
}
    