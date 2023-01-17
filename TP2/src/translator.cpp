#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{

    // base
    /*
    std::cout << "This is a translator, but it does nothing for now..." << std::endl;
    std::cin.ignore();
    */

    string input = "";
    set<string> possibilities = {"q",
                                 "e",
                                 "quit",
                                 "exit"};
    while (!possibilities.count(input))
    {
        cout << "This is a translator, but it does nothing for now..." << endl;
        cin >> input;
    }
    cout << "Sortie du programme" << endl;
    return 0;
}