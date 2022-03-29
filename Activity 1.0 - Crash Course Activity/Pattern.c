#include<stdio.h>

void main()
{
   int i,j,rows,space;
  printf("Enter number of rows:");
  scanf("%d",&rows);
   for(i=1;i<=rows;i++) // for the rows 
  {
  for(space=1;space<=(rows-i);space++) // for the column 
  {
    printf(" "); // spacing 
}
   for(j=1;j<=i;j++)
 {
  printf("* ");

}
    printf("\n");
}
    return 0;
}