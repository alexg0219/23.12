#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");

    if (!input)
    {
        cout << "error";
        return 0;
    }

    int x1, y1, x2, y2;
    input >> x1 >> y1 >> x2 >> y2;
    if (abs(x1 - x2) == abs(y1 - y2))
        cout << 1;
    else
        if ((x1 + y1) % 2 == (x2 + y2) % 2)
            output << 2;
        else
            output << 0;

    input.close();
    output.close();
}
