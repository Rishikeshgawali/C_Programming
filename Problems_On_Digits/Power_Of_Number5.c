#include<stdio.h>
#include"Power_Helper5.h"
int main()
{
	auto ULONG lRet=0;
	int iValue1=0;
	int iValue2=0;
	
	printf("enter base:\n");
	scanf("%d",&iValue1);
	
	printf("enter power:\n");
	scanf("%d",&iValue2);
	
	lRet=Power(iValue1,iValue2);
	
	printf("Result is:%ld\n",lRet); //Power(3,4)
	
	return 0;
	
}
