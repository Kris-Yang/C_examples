/*�˷�C����P106*/

#include<stdio.h>

int main()
{
	float latitude;
	float longitude;
	char info[80];
	int started = 0;
	
	puts("data=[");
	while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3){
		/*scanf()���ǽ���ָ�����*/ 
		/*scanf()�������سɹ���ȡ����������*/ 
		if (started)
			printf(",\n");
		else
			started = 1;
			printf("{latitude: %f, longitude: %f, info: '%s'}", latitude, longitude, info);
	}		/*scanf()���յ���ֵ����������ֵ�ĵ�ַ��*/ 
	puts("\n]");
	return 0;
}
