// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
#include <string> 

using namespace std;
int main() {
    // Write C++ code here
    int shipCapacity, totalPeople;
    cin>>shipCapacity>>totalPeople;
    
    int totalRounds = totalPeople/shipCapacity;
    int remainingPeople = totalPeople%shipCapacity;
    if(remainingPeople!=0){
        totalRounds+=1;
    }
    
    cout<<totalRounds<<endl;

    return 0;
}
