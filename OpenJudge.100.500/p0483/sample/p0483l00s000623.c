#include    <stdio.h>

int main(void)
{
    int	n;
    char    str[4];

    if (fscanf(stdin, "%d", &n) != 1) {
	return 0;
    }

    sprintf(str, "%3d", n);

    for (int i = 0; i < 3; i++) {
	if (str[i] == '7') {
	    printf("Yes\n");
	    return 0;
	}
    }
    printf("No\n");
    return 0;
}

/*
 * vim:smartindent:sw=4:sts=4:co=84:nu:wm=78:
 */
