#include <stdio.h>
void fortune_cookie(char msg[])
/*msg其实是指针变量*/ 
{
	printf("Message reads: %s\n",msg);
	/*msg指向传进来的消息*/ 
	printf("msg occupies %i bytes\n", sizeof(msg));
	/*sizeof（msg）不过是指针变量的大小罢了*/ 
}
int main()
{
	char quote[]="Cookies make you fat";
	/*quote变量代表字符串中第一个字符的地址。*/
	fortune_cookie(quote);
	printf("The quote 字符串保存在：%p\n",quote);
	return 0;
	
}

