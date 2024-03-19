#include <stdio.h>
#include <string.h>

int main()
{
    char String[11]="",new_String[12]="";
    int fal=0;
    scanf("%s %s",String,new_String);

    for(int i=0;i<strlen(String);i++){
	if(String[i]!=new_String[i]){
	    fal=1;
	    break;
	}
    }

    if(fal==0)
	printf("Yes\n");
    else
	printf("No\n");

    return 0;
}

