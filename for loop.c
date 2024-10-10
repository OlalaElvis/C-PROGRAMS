//ELVIS JOHNSTONE
//CT101/G/22915/24
#include<stdio.h>
int main(){
    int start; 
    int stop;
    int next;
    //data input
    printf("Enter when to start:");
    scanf("%d",&start);
    printf("Enter when to stop:");
    scanf("%d",&stop);
    printf("increment write 1,decrement write-1");
    scanf("%d",&next);
    
    for (int i = start; (next > 0 ? i <= stop :i >=stop);i +=next){
        printf("%d\n",i);
    }
 
   
    return 0;
}
    
    