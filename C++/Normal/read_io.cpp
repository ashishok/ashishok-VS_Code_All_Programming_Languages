#include<iostream>
#include<vector>
#include<fstream>
using namespace std;


int main()
{
ifstream file;
file.open("hello.txt");       //or   ifstream file (hello.txt);
  vector<string>names;

string input;
while(file >> input)
{
    names.push_back(input);
}

for(string n : names)
{
    cout<< n <<endl;
}
return 0;
}



// to read  line 


// int main()
// {
// ifstream file("hello.txt");

// string line ;
// getline(file,line);
// cout << lne << "\n";
// return 0;

// }


