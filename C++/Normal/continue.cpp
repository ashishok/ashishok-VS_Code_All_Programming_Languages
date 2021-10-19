#include<iostream>
using namespace std;
int main()
{
string sentence = " hello all my friends";
for( int i=0; i < sentence.size();i++)
{
      if(sentence[i] == 'o')
    {
         
        continue;
    }
    cout<<sentence[i];
  
}
 
return 0;
}