//ELVIS JOHNSTONE
//CT101/G/22915/24
#include<stdio.h>
int main(){
    int customerId;
     char customerName[105];
    int unitsConsumed;
    float totalBill;
    float totalAmount;
    float charge_unit;
    //Data input
    printf("ENTER CUSTOMER ID:");
    scanf("%d" ,&customerId);
    
    printf("ENTER CUSTOMER NAME:");
    scanf("%s" ,&customerName);
    
    printf("ENTER UNITS CONSUMED:");
    scanf("%d" ,&unitsConsumed);
    
    if(unitsConsumed <= 199){
     charge_unit=1.20;
     totalBill = unitsConsumed *charge_unit;
        printf("  Tota bill: %2f \n" ,totalBill);
    }else if(unitsConsumed>=200&&unitsConsumed<400){
        charge_unit=1.50;
        totalBill =unitsConsumed*charge_unit;
        printf("Total bill:%2f\n" ,totalBill);
    }if(unitsConsumed>=400&&unitsConsumed<600){
        charge_unit=1.80;
        totalBill =unitsConsumed *charge_unit;
        printf("Total bill:%2f\n" ,totalBill);
   }else 
   (unitsConsumed>=600);{
       charge_unit=2.0;
   totalBill =unitsConsumed*charge_unit;
        printf("Total bill:%2f\n" ,totalBill);
    }
    if(totalBill >400){
        totalAmount =totalBill+(totalBill*0.15);
        printf("Total Amount:%2f\n",totalAmount);
    }else if (totalBill<400){
        printf("No surchage charged");
    }if(totalBill<100){
        totalBill=100;
    }
    printf("Customer id:%d\n",customerId);
    printf("Customer Name:%s\n",customerName);
    printf("Units Consumed:%d\n",unitsConsumed);
    printf("charges per unit:%f\n",charge_unit);
    printf("Total Amount to pay:%2f\n",totalAmount);
        
    return 0;
}
  