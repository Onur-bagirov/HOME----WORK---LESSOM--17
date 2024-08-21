#include <iostream>

using namespace std;

int main()
{
    cout << "===================================================";
    cout << "\n\n";
    cout << "Tap - 1";
    cout << "\n\n\n\n";

    unsigned int col_8 = 23;
    unsigned int row_8 = 17;


    for (int i = 0; i < row_8; i++)
    {
        for (int j = 0; j < col_8; j++)
        {
            if ((i % 4 < 2 && j % 8 < 4) || (i % 4 >= 2 && j % 8 >= 4))
            {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "===================================================";
    cout << "\n\n";
    cout << "Tap - 2";
    cout << "\n\n\n\n";

    int n = 5;

    for (int i = 1; i <= n; ++i) {
        char char_ = 'A';
        int num_two = 1;

        for (int j = 1; j <= i; ++j) {
            if (i % 2 == 1) {
                cout << char_ << " ";
                char_++;
            }
            else {
                cout << num_two << " ";
                num_two++;
            }
        }
        cout << std::endl;
    }

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "===================================================";
}