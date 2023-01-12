#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Q1
    /*
    std::cout << "Hello World!" << std::endl;
    */

    // Q2
    /*
    int var;
    std::cin >> var;
    */

    // Q3
    string var;
    cout << "What your name ?\n";
    cin >> var;
    cout << "Hello " + var + "!" << endl;

    // Bonus (gestion de tableau dynamique)
    /*
    int array_size = 5;

    vector<int> array;

    for (int i = 0; i < array_size; i++)
    {
        array.emplace_back(i + 1);
    }

    for (int value : array)
    {
        cout << value << endl;
    }
    */
    return 0;
}