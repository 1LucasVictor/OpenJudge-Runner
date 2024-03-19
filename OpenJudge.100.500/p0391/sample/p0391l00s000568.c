#include<stdio.h>
#include<string.h>
char comm[100][2000],temp;
int main()
{
int q,i,j,jin,jen,start,p=0,v,w;
char str[1005];
scanf("%s",str);
scanf("%d",&q);
getchar();
for(i=0;i<q;i++)
{
p=0;
scanf("%[^\n]s",comm[i]);
getchar();
if(comm[i][2]=='i')
{
jin=0;
jen=0;
for(v=6;comm[i][v]!=' ';v++)
{
jin=(comm[i][v]-'0')+jin*10;
}
for(v=v+1;comm[i][v]!='\0';v++)
{
jen=(comm[i][v]-'0')+jen*10;
}
for(j=jin;j<=jen;j++)
{
printf("%c",str[j]);
}
printf("\n");
}
else if(comm[i][2]=='v')
{
jin=0;
jen=0;
for(v=8;comm[i][v]!=' ';v++)
{
jin=(comm[i][v]-'0')+jin*10;
}
for(v=v+1;comm[i][v]!='\0';v++)
{
jen=(comm[i][v]-'0')+jen*10;
}
for(j=jin;j<=(jin+jen)/2;j++)
{
temp=str[j];
str[j]=str[jen-p];
str[jen-p]=temp;
p++;
}
}
else
{
jin=0;
jen=0;
for(v=8;comm[i][v]!=' ';v++)
{
jin=(comm[i][v]-'0')+jin*10;
}
for(v=v+1;comm[i][v]!=' ';v++)
{
jen=(comm[i][v]-'0')+jen*10;
}
start=v+1;
for(j=jin;j<=jen;j++)
{
str[j]=comm[i][start];
start++;
}
}
}
return 0;
}

