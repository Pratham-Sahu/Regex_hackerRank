#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



using namespace std;

int main() 
{
    string s;
    getline(cin, s);
    
    string pattern = "hackerrank";
    int count = 0, found = s.find(pattern);
    
    while(found != string::npos)
    {
        count++;
        found = s.find(pattern, found + 1);
    }
    
    cout << "Number of matches : " << count;
    
    return 0;
}
