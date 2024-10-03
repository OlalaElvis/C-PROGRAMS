//ELVIS JOHNSTONE
//CT101/G/22915/24
#include<stdio.h>
#include<stdbool.h>
int main(){
   int age;
   int income;
  
   //Data input for age
   printf("Enter age:");
   scanf("%d" ,&age);
   //Data input for income
   printf("Enter income:");
   scanf("%d" ,&income);
   if(age>=21) {
       printf("congratulations you qualify for a loan");
   } else if (income>=21000){
       printf("congratulations you qualify for a loan");
   } else {
       printf("unfortunately we are unable to offer you a loan at this time");
   }
   
   
   return 0;
}