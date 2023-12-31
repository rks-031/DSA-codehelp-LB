// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    string str = "abcbdeaaf";
    
    unordered_map<char, int> freq;

    //unordered_map<string, int> freq;
    
    for(int i=0;i<str.length();i++){
        freq[str[i]]++;
    }
    
    int maxi = INT_MIN;
    
    auto it = freq.begin();
    
    while(it != freq.end()){
        maxi = max(maxi, it->second); it++;
    }
    
    it = freq.begin();
    
    while(it!=freq.end()){
        if(it->second == maxi) cout<<it->first; 
        it++;
    }
    

    return 0;
}