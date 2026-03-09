#include<stdio.h>
int main(){

    // loops
    // 1. for loop

   //for( initialisation; condition; increment/decrement){
      
   

      //int i;

    /*for( i = 0; i<=5; i= i+1){
         // i = 0 indicates the initialisation
         // i<=5 indicates the condition 
         // i = i+1 indicates the increment
         printf("HelloWorld!\n");
   }*/

   /*for(i = 0; i<=100; i++){
      printf("%d\n",i);
   }*/

   // i is looping variable
   /*for(i = 5; i>=0; i--){
      printf("%d\n", i);
   }*/

   /*for(i = 0; i<=20; i=i+2){
      printf("%d\n", i);
   }
    */

   /*int i, multi;
   for(i = 0; i<=10; i++){
      multi = 25*i;
   printf("25 x %d = %d\n", i , multi);
   }*/

   /*int i, multi;
   for(i =1; i<=10; i++){
      multi= 13*i;
      printf("13 x %d = %d\n",i, multi);
   }*/
 
 
  
      /*printf("%d\n", i++);// prints 5

      printf("%d\n", i);// prints 6
      */
    // printf("%d\n", ++i);// prints 6

    
  /*int x = 5, y =2,z=1;
  x+=y*=z+2;
  printf("%d %d", x,y);*/
  

  // 2. while loop

   /*initialisation
   while(condition)
   counter(increment/decrement)*/

   // multiplication table
   /*int i = 2;
   int a;
   printf("Enter the value of a: ");
   scanf("%d", &a);
   while(i >= 10){
    printf(" %d x %d = %d\n", a, i, a*i);
    i++;

   }*/ // false statement
   // multiplication table
   /*int i = 1;
   int a;
   printf("Enter the value of a: ");
   scanf("%d", &a);
   while(i <= 10){
    printf(" %d x %d = %d\n", a, i, a*i);
    i++;

   }*/ // true statement

   //do while loop

   //initialisation
   /*do{
      // counter(increment/decrement)               
    }while(condition);*/


   /* int i = 2;
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    do{
        printf("%d x %d = %d\n", a, i, a*i);
        i++;
    }
    while(i>=10);*/ // false statement

    /* int i = 1;
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    do{
        printf("%d x %d = %d\n", a, i, a*i);
        i++;
    }
    while(i<=10);*/ // true statement

    // Nested loops
    /*int i, j, n=1;
    for( i = 1; i<=10; i++){
      for( j = 1; j<=i; j++){
         printf("*",n);
         n++;
      }
      printf("\n");
    }*/
    
   /* int i,j;
    for(i = 1; i<=3; i++){
      for(j = 1; j<=3; j++){
         printf("%d ",i*j);
      }
      printf("\n");
    }*/

    /*int i;
     for(i=1; i<=10; i++){
         if(i == 7){
            break;
         }
         printf("%d\n", i);
     }*/

     // in nested for loop

     /*int i,j,n=1;
     for(i = 1; i<= 10; i++){

      for(j = 1; j<=10; j++){
         if(i==5){
            break;
         }
         printf("%d\n", n);
      }
      n++;
      printf("\n");
     }*/

     /*int i;
     for(i=1; i<=10; i++){
      if(i == 8){
         continue;
      }
      printf("%d\n", i);
     }*/

     /*int a;
     for(a =0; a<20; a++){
      if(a%2== 0){
         continue;
      }
      printf("%d\n", a);
     }*/

     /* int a;
     for(a =0; a<20; a++){
      if(a%2== 1){
         continue;
      }
      printf("%d\n", a);
     }*/

     /*int a,sum = 0;
     for(a = 0; a<=100; a++){
      if(a%2 == 0){
         continue;
      }
      sum = sum+ a;
   
      
     }
     printf("%d\n", sum);*/

    

   /*  #include <stdio.h>


    int a, count = 0;

    for (a = 1; a <= 100; a++) {
        if (a % 2 == 0) {
            continue; // Skip even numbers
        }
        count++; // Count odd numbers
    }

    printf("The number of odd numbers between 1 to 100 is: %d\n", count);*/

   int x = 5;
float y = (float)x / 2;
printf("%f\n", y);

    
return 0;
}