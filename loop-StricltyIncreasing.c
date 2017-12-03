#include <stdio.h>
#include <stdlib.h>

void userloop(int n, char *c, int indc)
{
	int i;

	if (indc >= n)
	{
		*(c + indc) = '\0';
		printf("%s-", c);
		return;
	}

	for (i = 0; i <= 9; i++ )
	{
		*(c + indc) = '0' +  (char) i;
		if(indc > 0)
		{	
		if (*(c + indc -1) < *(c + indc))
		userloop(n, c, (indc+1));	
		}
		else
		userloop(n, c, (indc+1));	
	}
	return;
}

void main()
{
	int n;
	char *c;

	printf("enterNumber:");
	scanf("%d", &n);

	c = malloc(n+1);
	userloop(n, c, 0);

	free(c);
	return;
}
