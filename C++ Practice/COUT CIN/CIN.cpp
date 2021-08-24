#include <iostream>

int main() 
{
    
int num ; // int is the type of data
 std::cout << "Enter a number: " ;
   std::cin >> num ; // cin will allow user to input value
std::cout << "The number you entered is: " << num ; // haha noob

float numF ; // float is type of data 
     std::cout << "\nEnter a float: " ; // pur \n to place it in next line 
     std::cin >> numF;
     std::cout << "The float you entred is: " << numF; 

float num1,num2,num3 ; // assigned 3 var at once
std::cout << "\nGive number 1: ";
std::cin >> num1 ; 
std::cout << "Give number 2: " ;
std::cin >> num2 ;
num3 = (num1*num2) ; // assigning value of num3 as product
std::cout << "The product of number 1 and 2 is " << num3;
    return 0;

}
