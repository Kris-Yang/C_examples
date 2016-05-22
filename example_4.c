#include <stdio.h>
/*嗨翻C语言P57*/
int main()
{
	int contestants[] = {1, 2, 3};
	int *choice = contestants;
	/*choice现在是constestants数组的地址。*/
	contestants[0] = 2;
	contestants[1] = contestants[2];
	contestants[2] = *choice;
	printf("我选 %i 号男嘉宾", contestants[2]);
	/*contestants[2]
	  == *choice
	  == contestants[0]
	  == 2*/
	return 0;
	
 } 
