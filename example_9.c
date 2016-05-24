/*嗨翻C语言P106*/

#include<stdio.h>

int main()
{
	float latitude;
	float longitude;
	char info[80];
	int started = 0;
	
	puts("data=[");
	while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3){
		/*scanf()总是接收指针参数*/ 
		/*scanf()函数返回成功读取的数据条数*/ 
		if (started)
			printf(",\n");
		else
			started = 1;
			printf("{latitude: %f, longitude: %f, info: '%s'}", latitude, longitude, info);
	}		/*scanf()接收的是值，而不是数值的地址。*/ 
	puts("\n]");
	return 0;
}
