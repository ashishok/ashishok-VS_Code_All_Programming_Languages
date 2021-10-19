#include<iostream>
#include<fstream>
#include<cstring>
// #include<stdlib.h>

using namespace std;
int main()
{
char  string[80];
cout<<"enter a string\n";
cin>>string;
int len = strlen(string);

fstream file;
file.open("text",ios::in | ios::out);     // in for reading and out for writing 

for(int i=0;i<len;i++)
file.put(string[i]);                    // put a character  to the file

file.seekg(0);                      // go the start of the file text

char ch;
while(file)
{
    file.get(ch);
    cout<<ch;
}
return 0;
}