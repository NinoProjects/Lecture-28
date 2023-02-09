#include<iostream>

using namespace std;

int main()
{
    int array1[50], reverse[50], size, num;


    cout << "please enter number of values" <<endl;
    cin >> size;

    cout << "please enter values" <<endl;
    int i = 0;
    do {
        cin >> array1[i];
        i++;
    }
    while(i < size);

    cout<< "reverse of array" <<endl;

    for(int i = size-1, num = 0; i >= 0; i--, num++) {
        reverse[i] = array1[num];
    }
    for(int i = 0; i < size; i++) {
        cout <<" "<< reverse[i]<< " ";
    }
  
   return 0;
}
   