#include<stdio.h>
int power(int n1,int n2);
int main()
{
  int X,Y,result;
   printf("Enter X:");
   scanf("%d",&X);
   printf("Enter Y:");
    scanf("%d",&Y);
    result = power(X,Y);
    printf("%d^%d = %d",X,Y,result);
    return 0;
}
  int power(int X,int Y){
    if(Y != 0)
      return (X * power(X,Y - 1));
    else
    return 1;
  }