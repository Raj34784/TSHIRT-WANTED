#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
    //{}[]()
    int flag=0,i=0;
    stack<char> s;
    string str;
    cout<<"Enter string"<<endl;
    getline(cin,str);
    while(str[i]!='\0')
    {  // cout<<"-"<<str[i];
        if((str[i]=='{')||(str[i]=='[')||(str[i]=='('))
        s.push(str[i]);

        if((str[i]) == '}')
            if((s.top())=='{')
            s.pop();
            else
            {
                flag=1;
                break;
            }
        else
        if(str[i]==']')
            if(s.top()=='[')
            s.pop();
            else
            {
                flag=1;
                break;
            }
        else
            if(str[i]==')')
            if(s.top()=='(')
            s.pop();
            else
        {
            flag=1;
            break;
        }
        
        i++;
    }

    cout<<str<<endl;

 /*   while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
*/
    if(s.empty())
    cout<<"Balanced";
    else
    cout<<"NOT Balanced";
    cout<<endl;

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    









    return 0;
}