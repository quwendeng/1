#include <stdio.h>

int main(void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);

	if(a+b > c && a+c > b && c+b > a)
	{
		if(a*a + b*b == c*c || a*a+c*c == b*b || b*b+c*c == a*a)
		{
			printf("shi zhijiaosanjiaoxing!\n");
			return 0;
		}
		
		if(a == b && b == c && a == c)
		{
			printf("shi dengbiansanjiaoxing!\n");
			return 0;
		}

		if(a ==b || b == c || c == a)
		{	
			printf("shi dengyaosanjiaoxing!\n");
			return 0;
		}
		
		printf("shi putongsanjiaoxing!\n");

	}
	else
	{
		printf("is not!\n");
	}

	return 0;
}
