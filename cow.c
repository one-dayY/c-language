#include<stdio.h>

int cow(int n)
{
	if(n <= 4)
	{	
		return n;
		//第四年之前都是母牛和小牛的数量 
	}
	else
	{
		return cow(n - 3) + cow(n - 1);
		//母牛第四年就可以生小牛！ 
	}
}

int main()
{
	int n = 0;//第几年 
	int sum = 0;//总数 
	
	scanf("%d",&n);
	
	sum = cow(n);
	
	printf("%d\n",sum);
	
	return 0;
}
