/*
CT101/G/22915/24
Name; Elvis Johnstone
*/

#include<stdio.h>
#include<string.h>
struct book{
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
}book1,book2;
int main(){
     //data prompting
  printf("Enter Title:",book1.title);
  scanf("%s",&book1.title);
  
  printf("Enter Author:",book1.author);
  scanf("%s",&book1.author);
  
  printf("Enter Publication year:",book1.publication_year);
  scanf("%d",&book1.publication_year);
  
  printf("Enter ISBN:",book1.ISBN);
  scanf("%s",&book1.ISBN);
  
  printf("Enter Price:",book1.price);
  scanf("%f",&book1.price);
  
  //output
  
 printf("Title : %s \n",book1.title);
 printf("Author : %s \n",book1.author);
 printf("Publucation year:%d\n",book1.publication_year);
 printf("ISBN: %s\n",book1.ISBN);
 printf("Price: %f",book1.price);
  
  
 
 return 0;
}
    
 