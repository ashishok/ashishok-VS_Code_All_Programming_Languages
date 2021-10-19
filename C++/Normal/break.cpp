#include<iostream>
using namespace std;
int main()
{
string sentence = " hello all my friends";
for( int i=0; i < sentence.size();i++)
{
    cout<<sentence[i];
    if(sentence[i] == 'o')
    {
        cout<<"found o!\n";
        break;
    }
}
cout<<"done";
return 0;
}