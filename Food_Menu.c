#include<stdio.h>

void main()
{
	printf("Food Menu \n 1.Pizza,Rs239 \n 2.Burger,Rs129 \n 3.Pasta,Rs179 \n 4.French Fries,Rs99 \n 5.Sandwich,Rs149 \n \n");
	
	printf("Enter your choice : ");
	int dish;
	scanf("%d",&dish);
	printf("\n");
	
	switch(dish)
	{
		case 1:
			printf("Food item - Pizza \nPrice - Rs239 \n");
			break;
		case 2:
			printf("Food item - Burger \nPrice - Rs129 \n");
			break;
		case 3:
			printf("Food item - Pasta \nPrice - Rs179 \n");
			break;
		case 4:
			printf("Food item - French Fries \nPrice - Rs99 \n");
			break;
		case 5:
			printf("Food item - Sandwich \nPrice - Rs149 \n");
			break;
		default:
			printf("Error: Invalid Choice");
	}
}
