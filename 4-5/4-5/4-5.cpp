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

    int k, m, n,t;

    input >> k >> m >> n;

    if (n <= k)
        t = 2 * m;
    else
    {
        if ((n * 2) % k == 0)
            t = m * (n * 2 / k);
        else
            t = m * (1 + (n * 2 / k));
    }

    output << t;

    input.close();
    output.close();
}
