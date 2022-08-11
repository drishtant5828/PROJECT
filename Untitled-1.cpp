// Online C++ compiler to run C++ program online
#include <iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;
bool canmake(string mag, string ram)
{   int i;
char ch,ch1;
    map<int,char>mp;
    for(i=0;i<mag.length();i++)
    {
        ch=mag[i];
        mp.insert({i,ch});
    }
    
    for(i=0;i<ram.length();i++)
    {
        ch1=ram[i];
        if(mp.find(ch1)==mp.end())
        return false;
        else
        mp.erase(ch1);
    }
    return true;
}
int main()
{
    string ram="aav";
    string mag="dsdh";
    cout<<canmake(ram,mag);
}