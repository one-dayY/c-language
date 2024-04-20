#include<stdio.h>
#include<math.h>

int main()
{
	int n = 0;
	int i = 0;
	scanf("%d",&n);
	
	for(i = 2;i <= n; i++)//0和1都不时素数，i直接从2开始 
	{
		int flag = 1;//flag是1，表示是素数
		int j = 0;
		
		for(j = 2;j <= sqrt(i) ; j++)
		{
			if(i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		
		if(flag == 1)//如果i不是素数，则不对flag进行改变 
		{
			printf("%d\n",i);
		} 
	}
	
	return 0;
} 
