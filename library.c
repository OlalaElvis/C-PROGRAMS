//ELVIS JOHNSTONE
//CT101/G/22915/24
#include<stdio.h>

int main(){
    int bookid;
    int dueDate;
    int returnDate;
    int fineRate;
    int fineAmount;
    int daysOverdue;
 
     //Data input
    printf("Enter bookid:");
    scanf("%d" ,&bookid);
    
    printf("Enter dueDate:");
    scanf("%d" ,&dueDate);
    
    printf("Enter returnDate:");
    scanf("%d" ,&returnDate);
//calculate days_overdue
 daysOverdue = returnDate - dueDate;
       if(daysOverdue >0){
        
    
        printf("book id:%d\n",bookid);
         printf("Due Date:%d\n",dueDate);
         printf("Days Overdue:%d\n",daysOverdue);

     }
     
     else{
         printf("No fine imposed\n");
     }
     if(daysOverdue>0 &&daysOverdue <= 7){
         //fineRate = 20;
         fineAmount = 20 * daysOverdue;
         printf(" FINE AMOUNT:%d",fineAmount);
     }else if(daysOverdue >7 && daysOverdue <=14){
        // fineRate = 50;
         fineAmount = 50 * daysOverdue;
         printf("FINE AMOUNT:%d",fineAmount);
     }else if(daysOverdue >=15){
         //fineRate = 100;
         fineAmount = 100 * daysOverdue;
         printf(" FINE AMOUNT:%d",fineAmount);
     }
       
    return 0;
}
   
   