#include <iostream>
#include <string>
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

    int n;
    string m="1", l="5", m1="1", l1="5";
    input >> n;
    for (int i = 0; i < n; i++)
    {
        m += "0";
        if (i < n - 1)
            l += "0";
    }

    output << m;

    input.close();
    output.close();
}

