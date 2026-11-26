#include <bits/stdc++.h>
using namespace std;
int main() {
    ofstream f("grades.txt");
    vector<int> v(5);
    cout<<"Enter 5 grades: ";
    for (int i=0;i<5;i++)cin>>v[i],f<<v[i]<<' ';
    f.close();
    ifstream f2("grades.txt");
    if (f2.fail())
    {
        cout<<"Unable to open the file";
        return 0;
    }
    int x;
    while (f2>>x)cout<<x<<' ';
    cout<<endl;
    int d;
    cout<<"Enter a grade to delete: ";
    cin>>d;
    f2.clear();
    f2.seekg(0);
    ofstream t("temp.txt");
    if (t.fail())
    {
        cout<<"Unable to create the file";
        return 0;
    }
    bool found=false;
    while (f2>>x) {
        if (x!=d)t<<x<<' ';
        else found=true;
    }
    t.close();
    f2.close();
    if (!found)
    {
        remove("temp.txt");
        cout<<"Grade not found";
        return 0;
    }
    if (remove("grades.txt")!=0 or rename("temp.txt","grades.txt")!=0)cout<<"Error";
    else cout<<"Done";
}