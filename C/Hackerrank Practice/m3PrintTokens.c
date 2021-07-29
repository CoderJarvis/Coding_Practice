#include <stdio.h>
#include <string.h>
int main()
{
	char st[1000];
	gets(st);

	// printf("%d",strlen(st));
	

	for (int i = 0; i < strlen(st)-1; i++)
	{
		if(st[i]==' ')
		st[i]='\n';


	}
	printf("%s",st);
	printf("\n");
	
}
