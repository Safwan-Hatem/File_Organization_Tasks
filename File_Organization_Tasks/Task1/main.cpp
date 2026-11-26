#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
using namespace std;
int main() {
    string Fullname;
    getline(cin, Fullname);
    int id;
    float grade;
    cin >> id >> grade;
    ofstream task1("Student.txt");
    task1 << Fullname << " , " << id << " , " << grade << '\n';
}