#include <stdio.h>

int main(void)
{
	
	int num,sum = 0;
	
	scanf("%d",&num);

	if(num <= 3)
		sum = num * 30;
	else
		sum = (3*30) + (num-3)*50;

	printf("%d\n",sum);

	return 0;
}
