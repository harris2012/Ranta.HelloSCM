#include<REG52.h>//51��Ƭ��ͷ�ļ�

void delay();//��ʱ��������

sbit a = P1^0;//����˿ڶ���

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

void delay()//��ʱ����
{
	unsigned char i;//�ַ��ͱ���i����
	for(i=200;i>0;i--);//ѭ����ʱ
}