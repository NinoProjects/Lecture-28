#include<iostream>
#include<conio.h>
using namespace std;

 int main()
  {
      
   int Array[10];
   int loop_1, loop_2, array_size;
   int sum = 0;

   
   cout << "How many elements you want to enter: ";
   cin >> array_size;
   cout << "Enter the Elements:";
   
   
   for( loop_1=0; loop_1 < array_size; loop_1++ )
   {
   cin >> Array[loop_1];
   }
   cout << "Sum of Elements are: ";


   for(loop_2 = 0; loop_2 < array_size ; loop_2++ )
   {
    sum = sum + Array[loop_2];
   }
  cout << sum;
  
  
  return 0;
  
  }