#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
void play_game()
{
    int random = rand() % 251;
    //  cout << random << endl;
    cout << "guess a number\n";
    while (true)
    {
        int guess;
        cin >> guess;
        if (guess == random)
        {
            cout << "you win\n";
            break;
        }
        else if (guess < random)
        {
            cout << "too low\n";
        }
        else if (guess > random)
        {
            cout << "too high\n";
        }
    }
}

int main()
{
    srand(time(NULL));
    int choice;
    do
    {
        cout << "0. quit" << endl
             << "1. play Game\n";
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "thanks for nothing\n";
            return 0;
        case 1:
            play_game();
            break;
        }
    } while (choice != 0);

    return 0;
}