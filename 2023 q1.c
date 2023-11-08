#include <stdio.h>

int main() 
{
    int participants;
    char package_type, additional_service;
    float package_price, total_price, discount, additional_cost = 0;
    
    printf("Package Type (G/S/B): ");
    scanf(" %c", &package_type);
    
    printf("No of Participants: ");
    scanf("%d", &participants);
    
    
    // Calculating package price
    if (package_type == 'G') 
	{
        package_price = 20000;
    } 
	else if (package_type == 'S') 
	{
        package_price = 15000;
    } 
	else 
	{
        package_price = 10000;
    }
    // Applying discount if applicable
    if (participants > 10) 
	{
        discount = package_price * 0.1;
    } 
	else 
	{
        discount = 0;
    }
    
    package_price -= discount;
    // Asking for additional services
    
    printf("Do you want additional services (Y/N): ");
    scanf(" %c", &additional_service);
    
    while (additional_service == 'Y' || additional_service == 'y') 
	{
        printf("Enter the service you like to book (C/V/E): ");
        char service;
        scanf(" %c", &service);
        if (service == 'C') 
		{
            additional_cost += 5000;
        } 
		else if (service == 'V') 
		{
            additional_cost += 7500;
        } 
		else if (service == 'E') 
		{
            additional_cost += 10000;
        }
        
        printf("Do you want additional services (Y/N): ");
        scanf(" %c", &additional_service);
        
    }
    // Calculating total price
    
    total_price = package_price + additional_cost;
    printf("Total amount to be paid: Rs.%.2f\n", total_price);
    
    

}
