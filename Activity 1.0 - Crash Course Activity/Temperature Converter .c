#include<stdio.h>

int main()
{
    
    float kelvin;
    float celsius;
    float fahrenheit;
    int choice;
 
    printf("\n1:Celsius to Fahrenheit");
    printf("\n2:Celsius to Kelvin");
    printf("\n3:Fahrenheit to Celsius");
    printf("\n4:Fahrenheit to Kelvin");
    printf("\n5:Kelvin to Fahrenheit");
    printf("\n6:Kelvin to Celsius");   
       printf("\nEnter your choice (1,2,3,4,5,6):");
      scanf("%d",&choice);
    
     if(choice == 1){  
              printf("\nEnter temperature in Celsius: ");
            scanf("%f",&celsius);
              fahrenheit = (celsius *1.8)+32;
             printf("Temperature in Fahrenheit: %.2f",fahrenheit);
            }
        else if(choice == 2){
              printf("\nEnter temperature in Celsius: ");
            scanf("%f",&celsius);
              kelvin = celsius + 273.15;
             printf("Temperature in Kelvin: %.2f",kelvin);
            }
              else if(choice == 3){
              printf("\nEnter temperature in Fahrenheit: ");
            scanf("%f",&fahrenheit);
              celsius = (fahrenheit -32) * 5/9;
             printf("Temperature in Celsius: %.2f",celsius );
            }
              else if(choice == 4){
              printf("\nEnter temperature in Fahrenheit: ");
            scanf("%f",&fahrenheit);
              kelvin = (fahrenheit-32) * 5/9 + 273.15;
             printf("Temperature in Kelvin: %.2f",kelvin);
            }
            
              else if(choice == 5){
              printf("\nEnter temperature in Kelvin: ");
            scanf("%f",&kelvin);
              fahrenheit = (kelvin - 273.15) * 9/5 + 32;
             printf("Temperature in Fahrenheit: %.2f",fahrenheit);
            }
              else if(choice == 6){
              printf("\nEnter temperature in Kelvin: ");
            scanf("%f",&kelvin);
              celsius = kelvin - 273.15;
             printf("Temperature in Celsius: %.2f",celsius);
            }
        else{
                printf("Temperature Converter");
        }
        return 0;
}
        