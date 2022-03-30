#include <stdio.h>
int per(int a[3][2],int id, int pin){
    int flag = 0;
   for(int i = 0; i<3; ++i){
     if(id == a[i][0] && pin == a[i][1]){
         flag = 1;
     }
  }
    return flag;
 }
int main(){
    int a[3][2] = {{1234,454},{5678,777},{987,543}};
    int id,pin;
    printf("Enter ID Number: ");
    scanf("%d",&id);
    printf("Enter PIN: ");
    scanf("%d",&pin);
    if(per(a,id,pin)){
        printf("You have successfully logged in\nID#:%d",id);
    } else {
        printf("Invalid ID/PIN!");
    }
    return 0;
}