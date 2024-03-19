t[10],p;
main(x){
while(~scanf("%d",&x)){
if(x)t[p++]=x;
else printf("%d\n",t[--p]);
}
}