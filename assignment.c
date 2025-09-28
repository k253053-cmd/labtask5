#include<stdio.h>
#include<math.h>
int main(){
/*Question:1
A movie theater charges different ticket prices. Kids under 5 are free. Seniors (65+) get a
discount. Adults pay the standard price. Write a program that takes a person&#39;s age and prints their
ticket price 
*/
int age = 0;
int ticketprice = 50;
printf("enter your age: \n");
scanf("%d", &age);

if(age<5){
ticketprice = 0;
printf("your ticket price is %d\n",ticketprice);
}

else if(age >65){
ticketprice = 0.8* ticketprice;
 printf("your ticket price is %d\n",ticketprice);
}

else{
printf("your ticket price is %d\n",ticketprice);
}













    return 0;
}