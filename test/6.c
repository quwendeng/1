#include <stdio.h>

int main(void)
{
	int num;

	scanf("%d",&num);

	int g,s,b,q;

	g = num % 10;
	s = num /10 % 10;
	b = num /100 % 10;
	q = num /1000;

	if(g == q && s == b)
	{
		printf("yes\n");
	}else
	{
		printf("no\n");
	}
	

	return 0;
}
