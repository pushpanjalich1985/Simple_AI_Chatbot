// /*#include <stdio.h>

// // void study();
// // void travel();
// // void lavachicken();
// // void message();
// // int getNumber();
// // int printSquare(int value);
// // void square(int *x);


// int main(){
    
//     // travel();
//     // lavachicken();
//     // message(); //  no input, no output 
    
//     // int num;
//     // num = getNumber();// no input, with output
//     // printf("%d", num);

//     // int number;
//     // printf("Enter a number:");
//     // scanf("%d", &number);
//     // printSquare(number);
//     // int x = 2;
//     // square(&x);

//     // int x = 5;
//     // int* p = &x;
//     // printf("%d\n", x);// value of x
//     // printf("%p\n", p);// memory adress
//     // printf("%p\n", &x );// memory adress

//     // int x = 5;
//     // int *p = &x;
//     // int y = *p;
//     // printf("%d\n", x);
//     // printf("%p\n", &p);
//     // printf("%p\n", p);


//     // int x = 5;
//     // int *p;
//     // p = &x;
//     // int **pp;
//     // pp = &p;
//     // printf("%d\n", x);
//     // printf("%d\n", &x);
//     // printf("%d\n", *p);
//     // printf("%d\n", pp);
//     // printf("%d\n", &p);
//     // printf("%d\n", &pp);
//     // printf("%d\n", **pp);
//     // printf("%d\n", *pp);

//     // pp amd *p are same
//     return 0;
// }



// // void study(){
// //     printf("I am studying at SAIU \n");
// // }
// // void travel(){
// //     printf("I wanna go to Iceland\n");
// //     study();
// // }
// // void lavachicken(){
// //     printf("I love chicken lava\n");
// // }
// // void message(){
// //     printf("I love doraemon\n");
// // }
// // int getNumber(){
// //     int n;
// //     printf("Enter a number:");
// //     scanf("%d", &n);

// //     return n;
// // }
// // int printSquare(int value){
// //     int sq;
// //     sq = value*value;
// //     printf("The square of %d is %d\n", value, sq);
// //     return sq;
// // }
// // void square(int *x){
// //     *x = (*x)*(*x);
// //      printf("The square of the number is:%d\n", *x);
// // }


// // * - Value stored at a pointer adress
// // & -  Gives the adress of the box



// */
// // recursion 
// //  #include<stdio.h>
// //  int sum(int n);

// //  int main(){

// //     int S = sum(100);
// //     printf("The sum is: %d\n",S );

// //     return 0;
// //  }

  
// // int sum(int n){

// //     if (n == 1){
// //         return 1;
// //     }

// //     int sumN_1 = sum(n-1);
// //     int sumN = n +sumN_1;
// //     return sumN;
// // }

// // // Base problem [sum(1) = sum(1-1)= 1]

// // #include<stdio.h>

// // int main(){


// //     int n, sumN;
    
// //     printf("Enter the value of n: ");
// //     scanf("%d", &n);

// //     sumN = (n*(n+1))/2;
// //     printf("The sum of 1st %d numbers is: %d\n", n, sumN);




// //     return 0;
// // }
 
// // #include<stdio.h>

// // int fact(int n);

// // int main(){

// //     int F = fact(10);
// //     printf("The factorial is: %d\n" ,F );
// //     return 0;
// // }

// // int fact(int n){

// //     if( n ==1){
// //         return 1;
// //     }
// //     int factN_1 = fact(n-1);
// //     int factN = factN_1 *n;

// //     return factN;
// // }

// //Multidimensional arrays
// #include<stdio.h>
// int main(){
//     // int i, j;
//     // int mat1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//     // int mat2[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

//     // to print mat2

//     //   for(int j = 0; j<4; j++){
//     //     for(int i =0; i<3; i++){

//     //         printf("%d\t", mat2[j][i]);
       
//     //     }
//     //     printf("\n");
//     //   }

//       // to multiply both mat2 and mat2
//     //   int mat3[3][4] = {0};
     

//     //   for(int i = 0;i<3; i++){
//     //     for(int j =0; j<4; j++){
//     //         mat3[i][j] = mat1[i][j]* mat2[i][j];
//     //         printf("%d\t", mat3[i][j]);

           
     

//     //     }
//     //     printf("\n");
//     //   }

//     // find the biggest number in the given matrix
    
//      int mat1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//      int max =mat1[0][0];

//      for(int i=0; i<3; i++ ){
//         for(int j =0;j<4; j++){
//             if(mat1[i][j]>max){
//                 max = mat1[i][j];
//             }
//         }
//      }
//      printf("The maximum element is:%d\n", max);

    


//     return 0;
// }

// #include<stdio.h>
// #include<string.h>

//     // struct class_AI
//     // {
//     //     /* data */
//     //     char name[25];
//     //     float Percentage;
//     //     char grade;

//     // };
    
  

// int main(){

    // char grade; char name[25]; int percentage;;
    // printf("Enter your name:");
    // fgets(name, sizeof(name), stdin);
    // printf("Enter your percentage:");
    // scanf("%d", &percentage);
    // if( percentage >= 90){
    //     grade = 'A';
    // }
    // else if( percentage >= 80){
    //     grade = 'B';
    // }
    // else if( percentage >= 70){
    //     grade = 'C';
    // }
    // else if( percentage >= 60){
    //     grade = 'D';
    // }
    // else{
    //     grade = 'F';
    // }
    // printf("Hello %sYour grade is: %c\n", name, grade);


    // struct class_AI student1;
    // printf("Enter your name:");
    // scanf("%s", &student1.name);
    // printf("Enter your Percentage:");
    // scanf("%f", &student1.Percentage);
    // printf("Enter your grade:");
    // scanf(" %c", &student1.grade);

    // printf("The entered details are:%s %f %c\n", student1.name, student1.Percentage, student1.grade);
//     return 0;
// }

   #include <stdio.h>

int main() {

    //   int a,b,c;
    // printf("Enter three numbers:");
    // scanf("%d %d %d", &a, &b, &c);

    // if(a >b){
    //     if(a>c){
    //         printf("The largest number is:%d\n", a);
    //     }else
    //     {
    //         printf("The largest number is :%d\n", c);
    //     }
    // }
    // else if(b>c){
    //     printf("The largest number is:%d", b);
    // }
    // else{
    //     printf("The largest number is:%d", c);
    // }

    // int a,b;
    // char op;
    // printf("Enter the values of a and b");
    // scanf("%d %d", &a,&b);
    // printf("Enter the operation ");
    // scanf(" %c", &op);

    // switch(op){
    //     case '+':
    //         printf("The sum is: %d", a+b);
    //         break;
    //     case '-':
    //         printf("The difference is: %d", a-b);
    //         break;
    //         case '*':
    //         printf("The product is: %d", a*b);
    //         break;
    //         case '/':
    //         if(b != 0){
    //             printf("The division is: %d", a/b);
    //         }else{
    //             printf("Error: Division by zero is not allowed./n");
    //         }
    //         break;
    //         default:
    //         printf("Error: Invalid operation./n");

    // }
    // char ch;
    // printf("Enter a character:");
    // scanf("%c", &ch);

    // switch(ch){
    //     case 'a': case 'e': case 'i': case 'o': case 'u':
    //     case'A': case 'E': case 'I': case 'O': case 'U':
    //     printf("%c is a vowel.\n", ch);
    //     break;
       
    //    default:
    //    printf("%c is a consonant.\n", ch);
    // }



//     int a, b, c, d, e, max;
//     printf("Enter five numbers:");
//     scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
   
//     max = a;
//     if(b> max){
//         max =b;
//     }
//     else if( c> max){
//         max = c;
//     }
//     else if(d>max){
//         max =d;
//    }
//    else {
//     max = e;
//    }
//     printf("Max = %d\n", max);
 

//     char s[200];
//     int i;
//     fgets(s, sizeof(s), stdin);
//   for( i = 0; s[i] != '\0'; i++){
//     if(s[i] >='a' && s[i] <= 'z'){
//        s[i] = s[i] - 'a' +'A';
//     }
//   }
//   printf("%s", s);



    // char str[] = "hello world";

    // for (int i = 0; str[i] != '\0'; i++) {
    //     if (str[i] == 'o') {
    //         str[i] = 'x';   // replace 'o' with 'x'
    //     }
    // }

    // printf("Modified string: %s\n", str);


    char s[200];
    int i;
    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 'a' + 'A';
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] - 'A' + 'a';
    }
    printf("%s", s);
  
   
    return 0;
}
