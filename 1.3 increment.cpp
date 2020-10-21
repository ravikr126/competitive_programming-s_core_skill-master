#include <iostream>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        bool flag=true;
        for(int i=0;i<s.length();i++)
            if(s[i]!='9')
        {
            flag=false;
            break;
        }
        if(flag)
            cout<<s.length()+1<<endl;
        else
            cout<<s.length()<<endl;
    }
}
