#include<stdio.h>

int cow(int n)
{
	if(n <= 4)
	{	
		return n;
		//������֮ǰ����ĸţ��Сţ������ 
	}
	else
	{
		return cow(n - 3) + cow(n - 1);
		//ĸţ������Ϳ�����Сţ�� 
	}
}

int main()
{
	int n = 0;//�ڼ��� 
	int sum = 0;//���� 
	
	scanf("%d",&n);
	
	sum = cow(n);
	
	printf("%d\n",sum);
	
	return 0;
}
