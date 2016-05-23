/*嗨翻C语言P78*/
#include<stdio.h>
int main()
{
	char masked_raider[] = "Alive";
	char *jimmy = masked_raider;
	/*jimmy及 masked_raider是同一个存储器地址的两个别名*/
	printf("Masked raider is %s, Jimmy is %s.\n", masked_raider, jimmy);
	masked_raider[0] = 'D';
	masked_raider[1] = 'E';
	masked_raider[2] = 'A';
	masked_raider[3] = 'D';
	masked_raider[4] = '!';
	printf("Masked raider is %s, Jimmy is %s.\n", masked_raider, jimmy);
	return 0;
}
