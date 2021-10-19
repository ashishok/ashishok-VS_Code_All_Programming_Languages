#include<iostream>
using namespace std;
int main()
{
string sentence = " hello all my friends";
for( int i=0; i < sentence.size();i++)
{
    cout<<sentence[i];
}
    cout<<endl<<sentence.length()<<endl;
    cout<<endl<<sentence.size()<<endl;
return 0;
}