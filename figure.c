#include<stdio.h>

int The_greatest_common_divisor(int a,int b)
{
	int i = 0;
	
	if(a > b)
	{
		for(i = a;i > 0; i--)
		{
			if(a % i == 0 && b % i == 0)
			{
				return i;
			}
		}
		
	}
	else
	{
		for(i = b;i > 0; i--)
		{
			if(a % i == 0 && b % i == 0)
			{
				return i;
			}
		}
	}
}

int Least_common_multiple(int a,int b,int num1)
{
	return a * b / num1;
}

int main()
{
	int a = 0;
	int b = 0;
	
	scanf("%d %d",&a,&b);
	
	int num1 = The_greatest_common_divisor(a,b);
	int num2 = Least_common_multiple(a,b,num1);
	
	printf("%d %d",num1,num2);
	
	return 0;
}
