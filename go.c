#include <stdio.h>
void go_south_east(int* lat/*����һ��ָ�����*/, int* lon)/*2.��ȡ������ַ�е�����*/
{
	*lat = *lat - 1;/*3.�޸ı�����ַ�е�����*/
	*lon = *lon + 1; 
}

int main()
{
	int latitude = 32;
	int longitude = -64;
	go_south_east(&latitude, &longitude);/*1.�õ������ĵ�ַ*/
	printf("ͣ����ǰλ�ã�[%i��%i]\n",latitude, longitude);
	return 0;
}
