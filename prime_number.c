#include<stdio.h>
#include<math.h>

int main()
{
	int n = 0;
	int i = 0;
	scanf("%d\n",&n);
	
	for(i = 2;i <= n; i++)//0��1����ʱ������iֱ�Ӵ�2��ʼ 
	{
		int flag = 1;//flag��1����ʾ������
		int j = 0;
		
		for(j = 2;j <= sqrt(i) ; j++)
		{
			if(i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		
		if(flag == 1)//���i�����������򲻶�flag���иı� 
		{
			printf("%d\n",i);
		} 
	}
	
	return 0;
} 
