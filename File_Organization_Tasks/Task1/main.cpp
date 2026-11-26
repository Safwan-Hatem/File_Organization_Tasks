#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
using namespace std;
int main() {
    ifstream fr("fruits.txt");
    string a,b,c;
    fr>>a>>b>>c;
    fr.close();
    ofstream fr2("fruits.txt");
    fr2<<"Fresh Fruits";
    fr2.close();
}