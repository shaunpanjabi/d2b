// d2b.cpp -- converts a base 10 number to any other base

#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    
    int decNum, base, index, remainder, yesNo, temp, arraySize;

    while (yesNo != 2)
        {
        cout << "Please enter your decimal number: " << endl;
        cin >> decNum;
        cout << "What base should I convert it to? :" << endl;
        cin >> base;
        index = 0;
        remainder = 0;
        arraySize = 0;
        temp = decNum;
        
        //Calculate Array Size needed
            while (temp != 0)
                {
                
                    temp = temp/base;
                    arraySize++;

                }         
        
        int digit[arraySize];
        cout<<"Array Size: " << arraySize << endl;
        
        //Fill Array
            while (decNum != 0)
                 {

                     remainder = decNum % base;
                     decNum = decNum / base;
                     digit[index] = remainder;
                     cout << decNum << " R" << remainder <<"  Index: "<< index << "  Array value: " << digit[index] <<endl;
                     index ++;

                 }
        
            index--;
        
        //Print array
        cout << "Your output: ";
        
            while (index >= 0)
                {
                
                    cout << digit[index];
                        if (index != 0)
                            {
                                cout << " ";
                            }
                    index--;
                
                }
        
        cout << endl << endl << "Would you like to go again? (1 = yes, 2 = no): ";
        cin >> yesNo;

            if (yesNo == 2)
                {
                    cout << "Okay, goodbye" << endl;
                }
        
        }   
    
    return 0;
    
}
