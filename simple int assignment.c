//ELVIS JOHNSTONE
//CT101/G/22915/24
#include<stdio.h> 

int main(){
    int principle;
    int time;
    float rate;
    int simpleinterest;
    //Data input
    printf("Enter principle:");
    scanf("%d", &principle);
    printf("Enter time:");
    scanf("%d", &time);
    printf("Enter rate");
    scanf("%f'000", &rate);
    // Calculate the simple interest
 simpleinterest = principle*rate*time;
    
    printf("principle is: %d\n" , principle);
    printf("time is: %d\n" ,time);
    printf("rate is: %f\n", rate);
    printf("simpleinterest  is : %d" ,simpleinterest);
    return 0 ;}
    