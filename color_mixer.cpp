#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main()
{
    const int COLOR_SIZE = 20;
    char first_color[COLOR_SIZE];
    char second_color[COLOR_SIZE];

    cout << "Enter the first color: ";
    cin >> setw(COLOR_SIZE) >> first_color;

    cout << "Enter the second color: ";
    cin >> setw(COLOR_SIZE) >> second_color;

    if  ((strcmp(first_color, "red") != 0 &&
        strcmp(first_color, "blue") != 0 &&
        strcmp(first_color, "yellow") != 0) ||
        (strcmp(second_color, "red") != 0 &&
        strcmp(second_color, "blue") != 0 &&
        strcmp(second_color, "yellow") != 0))
    {
        cout << "Error: Invalid color." << endl;
    }
    else if (strcmp(first_color, second_color) == 0)
    {
    cout << "Result color: " << first_color << endl;
    }
    else if ((strcmp(first_color, "red") == 0 &&
        strcmp(second_color, "blue") == 0) ||
        (strcmp(first_color, "blue") == 0 &&
        strcmp(second_color, "red") == 0))
    {
    cout << "Color combination makes: purple" << endl;
    }
    else if ((strcmp(first_color, "red") == 0 &&
        strcmp(second_color, "yellow") == 0) ||
        (strcmp(first_color, "yellow") == 0 &&
        strcmp(second_color, "red") == 0))
    {
    cout << "Color combination makes: orange" << endl;
    }
    else
    {
    cout << "Color combination makes: green" << endl;
    }

    return 0;
}
