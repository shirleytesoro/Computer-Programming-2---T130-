#include<stdio.h>

int main()
{
   int arr[50];
    int num,i,j,temp;
   
printf("Input the number of array:");
        scanf("%d",&num);
  for(i=1;i<num;i++){
      printf("Input numbers %d:",i);
      scanf("%d",&arr[i]);
     if(arr[i]< 0){
         printf("\nInvalid input.Enter again."); }     
    if (arr[i]<0){
     printf("\nInput numbers %d:",i);
      scanf("%d",&arr[i]);
    }
    }
    
    for(i=1;i<num;i++)
    {
       
     for(j=i+1;j<num;j++)

    {
     if(arr[j] > arr[i])
    {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
    
   }
     
  }
   printf("Sorted list:\n");
     for(i=0;i<num;i++)
    {
     printf("%d ",arr[i]);
  }

    return 0;
}

