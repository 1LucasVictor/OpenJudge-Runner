#include <stdio.h>
#include <stdlib.h>
main(){
  int i,j,k=0,l=0;
  char ch;
  char str1[200]="",str2[200],str3[200],str4[200];
  while(1){
    scanf("%s",str2);
    if(str2[0]=='-'&&str2[1]=='\0'){
      sprintf(str1,"%s%s\n",str1,str3);
      l=0;
      break;
    }
    if(atoi(str2)){
      if(l++==0)
        continue;
      for(i=atoi(str2);str3[i]!='\0';i++)
        str4[i-atoi(str2)]=str3[i];
      /* printf("%d\n",i-atoi(str2));       */
      j=i-atoi(str2);
      for(i=0;i<atoi(str2);i++)
        str4[j++]=str3[i];
      str4[j]='\0';
      sprintf(str3,"%s",str4);
    }
    else{
      if(k>0)
        sprintf(str1,"%s%s\n",str1,str3);
      sprintf(str3,"%s",str2);
      k++;
      l=0;
    }
    /* printf("%s\n",str3); */
  }
  printf("%s",str1);
return 0;
}