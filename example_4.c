#include <stdio.h>
/*�˷�C����P57*/
int main()
{
	int contestants[] = {1, 2, 3};
	int *choice = contestants;
	/*choice������constestants����ĵ�ַ��*/
	contestants[0] = 2;
	contestants[1] = contestants[2];
	contestants[2] = *choice;
	printf("��ѡ %i ���мα�", contestants[2]);
	/*contestants[2]
	  == *choice
	  == contestants[0]
	  == 2*/
	return 0;
	
 } 
