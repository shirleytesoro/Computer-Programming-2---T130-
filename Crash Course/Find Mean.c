#include<stdio.h>

int main()
{ 
   int i,n,arr[100],sum=0,average=0;
    
    printf("Enter number of integer:");
     scanf("%d",&n);
      for(i=0;i<n;i++)
    {
       printf("Enter an integer %d:",i);
       scanf("%d",&arr[i]);
        if (arr[i]<0){
     printf("\nEnter integer %d :",i);
     scanf("%d",&arr[i]);  
    }
    } 
      for(i=0;i<n;i++)
    {
      sum = sum+arr[i];
      average = sum/n;
    }
    
    printf("\nAverage is %d",average);
   
    return 0;
}