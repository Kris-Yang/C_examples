#include <stdio.h>
void go_south_east(int* lat/*这是一个指针变量*/, int* lon)/*2.读取变量地址中的内容*/
{
	*lat = *lat - 1;/*3.修改变量地址中的内容*/
	*lon = *lon + 1; 
}

int main()
{
	int latitude = 32;
	int longitude = -64;
	go_south_east(&latitude, &longitude);/*1.得到变量的地址*/
	printf("停！当前位置：[%i，%i]\n",latitude, longitude);
	return 0;
}
