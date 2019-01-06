#include <stdio.h>

int main(void)
{
	int y,m,d;
	int flag,res = 0;
	scanf("%d-%d-%d",&y,&m,&d);

	flag = (y % 4== 0 && y % 100 !=0) || y % 400 == 0;
	
	switch(m-1)
	{
		case 11 :
			res += 30;
		case 10 :
			res += 31;
		case 9 :
			res += 30;
		case 8 :
			res += 31;
		case 7 :
			res += 31;
		case 6 :
			res += 30;
		case 5 :
			res += 31;
		case 4 :
			res += 30;
		case 3 :
			res += 31;
		case 2 :
			res += (28+flag);
		case 1 :
			res += 31;
	}
	
	res += d;

	printf("%d\n",res);

	return 0;
}
