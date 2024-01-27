#include<bits/stdc++.h>
using namespace std;
void ev(string pre)
{
    stack<float >s;
    for(int i=pre.size()-1;i>=0;i--)
    {
        char sym=pre[i];
        if(sym>='0' && sym<='9')
        {
            s.push(sym-'0');
        }
        else
        {
            float a=s.top();
            s.pop();
            float b=s.top();
            s.pop();
            float sum;
            if(sym=='^')
            sum=pow(a,b);
            else if(sym=='*')
            sum=a*b;
            else if(sym=='+')
            sum=a+b;
            else if(sym=='-')
            sum=a-b;
            else if(sym=='/')
            sum=a/b;
            s.push(sum);

        }
    }
    cout<<s.top()<<endl;
}
int main()
{
    stack<string>s;
    string s1;
    getline(cin,s1);
    
    for(int i=0;i<s1.size();i++)
    {
        char sym=s1[i];;
        if(sym>='0' && sym<='9')
        {
            s.push(to_string(sym-'0'));
        }
        else 
        {
            string a=s.top();
            s.pop();
            string b=s.top();
            s.pop();
            a=sym+b+a;
            s.push(a);
        }
    }
    cout <<s.top()<<endl;
    ev(s.top());
}
//+1*-*23*/4^5678