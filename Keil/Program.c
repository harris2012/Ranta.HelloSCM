#include<REG52.h>//51单片机头文件

void delay();//延时函数声明

sbit a = P1^0;//输出端口定义

main()
{
	while(1)
	{
		a = 0;
		delay();
		a = 1;
		delay();
	}
}

void delay()//延时函数
{
	unsigned char i;//字符型变量i定义
	for(i=200;i>0;i--);//循环延时
}