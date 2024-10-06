// A little guessing game called
//    (for some obscure reason) <<Bulls and Cows>>.
#include <123.h>
#include <iostream>
#include <iomanip>
#include <random>
#include <fstream>
#include <sstream>
#include <cmath>
#include <cassert>
#include <cstdlib>
#include <string>
#include <list>
#include <forward_list>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <array>
#include <regex>
#include <random>
#include <stdexcept>
using namespace std;
int count (const vector<char>& digits, char d)
{
    int k{};

    for (int i = 0; i < digits.size(); ++i)
        if (digits[i] == d)
            ++k;

    return k;
}

void validate (const vector<char>& number)
{
    for (int i = 0; i < number.size(); ++i)
    {
        if (number[i] < '0' || '9' < number[i])
            error("the number contains not a digit");

        if (count(number, number[i]) != 1)
            error("digits of the number are not unique");
    }
}

vector<char> user_guess ()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1000, 9999);
    vector <char> number(4);

    for (int i = 0; i < number.size(); ++i)
        number[i] = dist(gen);


    cout << "guess the number: ";
    for (int i = 0; i < number.size(); ++i)
        cin >> number[i];

    if (!cin)
        error("invalid input");

    validate(number);

    return number;
}

int main ()
try
{
    cout << "<<Bulls and Cows>>\n"
         << "Computer sets a number of 4 unique digits.\n"
         << "Try to guess it.\n"
         << "<Bull> means right digit in the right position.\n"
         << "<Cow> means right digit in the wrong position.\n"
         << "\n"
         << "game is on" << endl;

    vector<char> number{'1', '3', '7', '2'};

    int bulls{};

    do
    {
        bulls = 0;
        int cows{};

        vector<char> uguess = user_guess();

        for (int i = 0; i < uguess.size(); ++i)
        {
            if (uguess[i] == number[i])
                ++bulls;
            else if (count(number, uguess[i]) == 1)
                ++cows;
        }

        cout << bulls << " bull(s) and " << cows << " cow(s)" << endl;
    }
    while (bulls != 4);

    cout << "game is over" << endl;
}
catch (exception& e)
{
    cerr << e.what() << endl;
    return 1;
}
catch (...)
{
    cerr << "Oops, something went wrong..." << endl;
    return 2;
}