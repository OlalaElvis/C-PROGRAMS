//ELVIS JOHNSTONE
//CT101/G/22915/24
#include <stdio.h>
#include <math.h>
int main(){
    int principle;
    double rate;
    int time;
    int n;
    int amount;
    int compoundinterest;
    //input
    printf("Enter principle:");
    scanf("%d" ,&principle);    
    printf("Enter rate:");
    scanf("%lf", &rate);
    printf("Enter time:");
    scanf("%d", &time);
    printf("number of times interest is compunded in a year:");
    scanf("%d", &n);
    
    rate=rate/100;
    
    amount= (principle* pow((1+rate/n),n*time));
  
    
    compoundinterest = amount- principle;

printf("amount is:%d\n",amount);
printf("compound_interest is:%d\n",compoundinterest);
    
    
    return 0;
}