#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
using namespace std;
struct st {
    string name;
    int id;
    float grade;
    char delim='$';
};
int main() {
    char c='y';
    ofstream f("student.txt");
    while (c!='n' and c=='y') {
        st s;
        getline(cin,s.name);
        cin>>s.id>>s.grade;
        f<<s.name<<' '<<s.id<<' '<<s.grade<<s.delim<<endl;
        cin>>c;
        cin.ignore();
    }
    f.close();
}