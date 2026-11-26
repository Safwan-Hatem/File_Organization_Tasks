#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
using namespace std;
int main() {
    ofstream we("welcome.txt");
    we<<"Welcome Everybody";
    we.seekp(13);
    we<<"one ";
    we.close();
    ifstream we2("welcome.txt");
    string s;
    getline(we2,s);
    cout<<s<<endl;
}