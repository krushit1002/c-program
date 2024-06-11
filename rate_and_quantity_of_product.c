#include<stdio.h>
int main()
{
	float price,quantity,tax,discount,totalcost;
	
	printf("enter the price:");
	scanf("%f",&price);
	printf("enter the quantity:");
	scanf("%f",&quantity);
	
	totalcost = price*quantity;
	printf("totalcost: %f \n",totalcost);
}
