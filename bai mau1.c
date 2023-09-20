#include <stdio.h>
void displayMenu();
void place0rder(char option);
float calculateTotalCost(char option, int quantity);
int main(){
	char option;
	int quantity;
	do {
		displayMenu();
		printf("Enter your option: ");
		scanf("%c", &option);
		if (option != 'd'){
			printf("Enter the quantity: ");
			scanf("%d", &quantity);
			place0rder(option);
			float totalCost = calculateTotalCost(option, quantity);
			printf("Total cost: $%.2\n\n", totalCost);
		}
	}while (option != 'd');
	return 0;
}
void displayMenu(){
	printf("********** Coffee Shop Menu ************\n");
	printf("a. Espresso - $2.50\n");
	printf("b. Cappuccino - $3.00\n");
	printf("c. Latte - $3.50\n");
	printf("d. Quit\n");
}
void place0rder(char option){
	switch(option){
		case 'a':
			printf("Placing order: Espresso\n");
			break;
		case 'b':
			printf("Placing order: Cappuccino\n");
			break;
		case 'c':
			printf("Placing order: latte\n");
			break;
		default:
			printf("Invalid option. Please try again.\n");
	}
}

float calculateTotalCost(char option, int quantity)
{
	float price;
	switch (option){
		case 'a':
			price = 2.50;
			break;
		case 'b':
			price = 3.00;
			break;
		case 'c':
			price = 3.50;
			break;
		default:
			price = 0.00;
	}
	return price * quantity;
}
