#include<iostream>
#include<string>
#include<stack>
#include<queue>
#include<sstream>
using namespace std;

// int main()
// {
//     int n = 1042;
//     //char c[4]= n;
//     string a=to_string(1042);
//     //int b=stoi(a[0]);
//     int b;
//     stringstream obj;  
//      obj << a[0]; // insert data into obj  
//      obj >> b;
//     cout<<b;
// }

int main()
{
    string s = "1042";
    int l = s.length();
    int i=1;
    for(int j = 1;j<l;j++)
    {
        i=i*10;
    }
    int val=0;
    int j=0;
    while(i)
    {
        val+=(int(s[j])-48)*i;
        i=i/10;
        j++;
    }
    cout<<val;
}