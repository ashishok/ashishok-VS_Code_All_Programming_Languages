#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    system("CLS");
    ofstream fout;
    fout.open("country");

    fout << "washingtin\n";
    fout << "London\n";
    fout << "seoul\n";

    fout.close();

    fout.open("capital");

    fout << "united states of america\n";
    fout << "united kingdom\n";
    fout << "South korea\n";
    fout.close();

    //reading the files
    const int N = 80;
    char line[N];

    ifstream fin;
    fin.open("country");
    cout << "contents of country \n\n";

    while (fin)
    {
        fin.getline(line, N);
        cout << line << endl;
    }
    fin.close();

    fin.open("capital");
    cout << "contents of capital file \n\n";

    while (fin)
    {
        fin.getline(line, N);
        cout << line << endl;
    }
    fin.close();
    return 0;
}