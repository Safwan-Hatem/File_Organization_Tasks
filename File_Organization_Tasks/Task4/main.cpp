#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
using namespace std;
struct per {
    string name;
    int age;
};
int main() {
    int n;
    cin>>n;
    per x;
    ofstream fr("persons.txt");
    for (int i=0;i<n;i++) {
        cin>>x.name>>x.age;
        fr<<x.name<<' '<<x.age<<endl;
    }
    fr.close();
    vector<per> v(n);
    ifstream fr2("persons.txt");
    per mn,mx;
    mn.age=1e9;
    mx.age=0;
    for (int i=0;i<n;i++) {
        fr2>>v[i].name>>v[i].age;
        if (v[i].age<mn.age) {
            mn.age=v[i].age;
            mn.name=v[i].name;
        }
        if (v[i].age>mx.age) {
            mx.age=v[i].age;
            mx.name=v[i].name;
        }
    }
    fr2.close();
    ofstream re("results.txt");
    re<<"Youngest : "<<mn.name<<endl<<"Oldest : "<<mx.name<<endl;
    re.close();
}