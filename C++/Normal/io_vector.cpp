#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    // string filename;
    // cin >> filename;
    // ofstream file (filename.c_str()); // when want to give txt file name by manually

    // OR

    ofstream file;
    file.open("hello1.txt"); // try file.open("hello1.txt",ios::app); it will print same everytime whenever we press run button after the execution of the program
    




    if (file.is_open())
    {                                                       //optional
        cout << "success \n";
    }



    vector<string> name = {"ash ", "kum "};
    name.push_back("ashish kumar ");
    name.push_back("ashish kumar");
    for (string game : name)
    {
        file << game;
    }

    file.close();
    return 0;
}