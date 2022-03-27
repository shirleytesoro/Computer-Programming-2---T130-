#include <stdio.h>
#include <conio.h>
void main()
{
    int grade;
    printf("Enter your grade: ");
    scanf("%d",&grade);
    
    if (grade < 1){
        printf("Invalid input.Try again.");
        return 0;
    }
    switch (grade)
    {
    case 92 ... 100:
        printf("Letter grade: A");
        break;
    case 84 ... 91:
        printf("Letter grade: A-");
        break;
    case 76 ... 83:
        printf("Letter grdae: B");
        break;
    case 68 ... 75:
        printf("Letter grade:B-");
        break;
    case 60 ... 67:
        printf("Letter grade: C");
        break;
   case 50 ... 59:
        printf("Letter grade: D");
        break;
   case 1 ... 49:
        printf("Letter grade: F");
        break;    
    default:
        break;
    }
    return 0;
}