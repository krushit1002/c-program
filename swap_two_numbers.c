#include<stdio.h>
int main()
{
	int number1=10,number2=20;
	printf("\n before swap number1:%d number2:%d",number1,number2);
	
	number1 = number1+number2;
	number2 = number1-number2;
	number1 = number1-number2; 

	printf("\n after swap number1:%d number2:%d",number1,number2);	
}

