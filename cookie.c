#include <stdio.h>
void fortune_cookie(char msg[])
/*msg��ʵ��ָ�����*/ 
{
	printf("Message reads: %s\n",msg);
	/*msgָ�򴫽�������Ϣ*/ 
	printf("msg occupies %i bytes\n", sizeof(msg));
	/*sizeof��msg��������ָ������Ĵ�С����*/ 
}
int main()
{
	char quote[]="Cookies make you fat";
	/*quote���������ַ����е�һ���ַ��ĵ�ַ��*/
	fortune_cookie(quote);
	printf("The quote �ַ��������ڣ�%p\n",quote);
	return 0;
	
}

