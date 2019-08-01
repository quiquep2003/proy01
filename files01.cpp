#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char str[50]="C++ Programming Examples\n";
    char ch;
    ofstream out("test01.txt");
    for(int i=0; str[i]!='\0';i++)
        out.put(str[i]);
    cout<<"\nData Written Characterwise.\n";
    out.close();

    ifstream in("test01.txt");
    while(in)
    {
        in.get(ch);
        cout<<ch;
    }
    cout<<endl;
    return 0;
}
