#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    vector<string> v={"Hadeer Mahmoud","Youssef Ali","Ahmed Mostafa","Esraa Ebrahim"};
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)cout<<v[i]<<endl;
}