#include<stdio.h>

int main()
{
  int n,i,max,min;
   printf("Enter number:");
   scanf("%d",&n);
  
   int a[n];
   for(i=0;i<n;i++)
  {
      printf("[%d]Input number:",i+1);
    scanf("%d",&a[i]);
      if(a[i]< 0){
         printf("\nInvalid input.Enter again.");}     
    if (a[i]<0){
     printf("[%d]Input number:",i+1);
      scanf("%d",&a[i]);
  }
}
    for(i=0;i<n;i++)
    {
    if(max<a[i])
     max=a[i];
    
    else
      if(a[i]<min)
       min=a[i]; 
    }
      printf("%d min: \n",min);
       printf("%d max: \n",max);
    return 0;
}