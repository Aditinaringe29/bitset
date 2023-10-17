#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    int vars=35;
    cout<<bitset<8>(vars)<<endl;
    vars=(1<<4);
    cout<<"after shift "<<vars<<endl;
    cout<<bitset<8>(vars)<<endl;
    vars|=(1<<2);
    cout<<bitset<8>(vars)<<endl;
    vars^=(1<<4);
    cout<<bitset<8>(vars)<<endl;

}