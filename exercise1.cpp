#include <iostream>

using namespace std;

int main()
{
    double num1, num2, num3, num4, num5;
    double average;
    cout << "input five numbers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    
    //gamovitvalot jami
    
    average = (num1 + num2 + num3 + num4 + num5) /5 ;
    
    cout << "average of numbers: " << average << endl;
    
    return 0;
    
}