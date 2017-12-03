#include <stdio.h>
#include <stdlib.h>

void userloop(int n, char *c, int indc, int stPoint)
{
	int i;

	if (indc >= n)
	{
		*(c + indc) = '\0';
		printf("%s-", c);
		return;
	}

	for (i = stPoint+1; i <= 9; i++ )
	{
		*(c + indc) = '0' +  (char) i;
		userloop(n, c, (indc+1), i);
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
	userloop(n, c, 0, -1);

	free(c);
	return;
}
