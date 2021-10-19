#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream file;
file.open("hello.txt");   // or simple --> ofstream file (hello.txt);


file<<" hey";

file.close();
return 0;
}