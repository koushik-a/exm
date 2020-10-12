#include <iostream>
#include <bits/stdc++.h> 
using namespace std; 
const int SIZE = 26; 
int  main() 
{ 
       string s;
       getline(cin, s);
       int n = s.length(); 
    int freq[SIZE] = { 0 }; 
    for (int i = 0; i < n; i++) { 
        freq[s[i] - 'a']++; 
    } 
    for (int i = 0; i < SIZE; i++) { 
        if (freq[i] == 0) 
            continue; 
        cout << (char)(i + 'a') << "=" << freq[i] << endl;
    } 
      return 0; 
} 
