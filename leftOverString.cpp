// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
#include <string> 

using namespace std;
int main() {
    // Write C++ code here
    string a,b;
    cin>>a>>b;
    
    int c=0;
    unordered_map<char,int> m;
    
    for(int i=0; i<a.size(); i++){
        m[a[i]]=1;
    }
    
    for(int i=0; i<b.size(); i++){
        if(m.find(b[i])!=m.end())
            m[b[i]]=0;
    }
    
    string ans="";
    for(int i=0; i<a.size(); i++){
        if(m[a[i]]!=0)
            ans+=a[i];
    }
    
    cout<<ans<<endl;

    return 0;
}
