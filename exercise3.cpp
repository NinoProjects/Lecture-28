#include<iostream>
using namespace std;

 int main()
  {
      
   int array[10], position, c, n, value;
   
   
   cout << "How many elements you want to enter: ";
   cin >> n;
   cout << "Enter the Elements:";
   
   for ( c = 0; c < n; c++ ) {
       cin >> array[c];
   }
   
   cout << "enter the location of element: ";
   cin >> position;
   
   cout << "enter the value to insert: " << endl;
   cin >> value;
   for (c = n - 1; c >= position - 1; c--) {
        array[c+1] = array[c];
    }
    
    array[position-1] = value;
   
   cout << "result is: ";
   for (c = 0; c <= n; c++)
   {
      cout<<array[c]; 
         }
   
   
   return 0;
}
   