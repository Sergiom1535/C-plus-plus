
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    string b;
    cin>>a;
    cin>>b;
    int len1 = a.size();
    int len2 = b.size();
    cout<<len1<<" "<<len2<<endl;
    cout<<a+b<<endl;
    char c0 = a[0];
    char c1 = b[0];
    swap(a[0],b[0]);
    cout<<a<<" "<<b<<endl;
    
   
    

    return 0;
}
