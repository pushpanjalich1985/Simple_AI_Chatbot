#include<stdio.h>
int main(){

    //assignment operators

   /* int x,y,z;
     x= 5;
     x+=6;
      printf("The value of x is:%d\n", x);

     y = 9;
     y -=2;
     printf("The value of y is:%d\n",y);

     z = 5;
     z*=4;
     printf("The value of z is:%d\n",z);

     //even and odd
     int a;

     printf("Enter the value of a :");
     scanf("%d", &a);

     if(a%2==0){
        printf("The number is even\n");
     }
     else{
        printf("The number is false\n");
     }*/


     //logic operations
   // | or
   // & and
   // ! not

   /*int p,q;

   printf("Enter the value of p:");
   scanf("%d", &p);

   printf("Enter the value of q:");
   scanf("%d", &q);

   int bitwise_AND = p &q;
   printf("The bitwise AND is:%d\n", bitwise_AND);

   int bitwise_OR = p | q;
   printf("The bitwise OR is:%d\n",bitwise_OR); // Provide the output in decimal form 


   printf("The bitwise of OR is:%d\n", p|q);
   printf("The bitwise of NOT is:%d\n", !p);*/



   /*float a,b;
   printf("Enter the value of a:");
   scanf("%f", &a);

   printf("Enter the value of b:");
   scanf("%f",&b);

   float sum = a+b;
   printf("The sum of a and b is:%.2f\n", sum);

   float multi = a*b;
   printf("The multiplication of a and b is:%.2f\n", multi);

   float div = a/b;
   printf("The division of a and b is:%.2f\n", div);

   float diff = a - b;
   printf("The difference of a and b is:%.2f\n",diff);*/


   //write a c program to find the leap year from user input considering febuary
   // Applying logical operaator

  /* int year;
   printf("Enter the year:");
   scanf("%d", &year);

   if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){

      printf("The year is leap year");
      printf("Febuary has 29 days\n");

   }

   else{
      printf("The year is not a leap year");
      printf("Febuary has 28 days\n");
   }*/



   //write program to enter the DOB of user is DD/MM/YY format


   /*int DD, MM, YY;
   printf("Enter the date of birth in DD/MM/YY format:");
   scanf("%d/%d/%d", &DD, &MM, &YY);

   printf("The date of birth is: %d/%d/%d\n", DD, MM, YY);*/


   //Write a program to determine the month has 31,29,30 days

   /*int month;
   printf("Enter the month number:");
   scanf("%d", &month);

   if(month ==1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
      printf("The monthg has 31 days\n");
   }
   else if(month == 4 || month == 6 || month == 9 || month == 11){
      printf("The month has 30 days\n");
   }
   else if(month == 2){
      printf("The month has 28 days\n");
   }
   else{
      printf("Invalid month number\n");
   }*/



    return 0;
}