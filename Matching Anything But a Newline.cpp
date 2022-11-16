#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <regex>
using namespace std;

int main() {
    regex strange(R"(.{3}\..{3}\..{3}\..{3})");
    string input_str;
    getline(cin, input_str);
    cout << boolalpha << regex_match(input_str, strange) << endl;
    return 0;
}
