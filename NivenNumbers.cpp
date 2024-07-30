// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
#include <string> 

using namespace std;

int findSumofDigits(int n)
{
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int main() {
    // Write C++ code here
    int nivenNumber;
    cin>>nivenNumber;
    
    int sumOfDigits = findSumofDigits(nivenNumber);
    
    double isDivisible = double(nivenNumber)/double(sumOfDigits);
    int quotient = nivenNumber/sumOfDigits;
    if(isDivisible == quotient)
        cout<<quotient<<endl;
    else
        cout<<"0"<<endl;

    return 0;
}
