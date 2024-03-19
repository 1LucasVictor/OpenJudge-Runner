main(){int a,b,c;
scanf("%d %d",&a,&b);
for(int i=0;i<b;i++){scanf("%d",&c);a-=c;}
puts(a<=0?"Yes":"No");}
