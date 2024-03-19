int main(){
int h,m,s,S;
scanf("%d",&S);
if(S>=0 && S<=86400)
{
h=S/3600;
m=(S-3600*h)/60;
s=(S-3600*h-m*60)%60;

}
printf("%d:%d:%d\n",h,m,s);
}