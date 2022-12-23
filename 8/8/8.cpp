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

    string s,ns;
    int n,c=0;
    input >> s >> n;

    if (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (ns.length() < 1023)
                ns += s;
            else
                break;
        }
    }
    else
    {
        n = abs(n);
        for (int i = 0; i < (s.length()/2); i++)
        {
            ns += s[i];
        }

        for (int i = 0; i < s.length(); i++)
            if (s[i] == ns[0])
                if (s.substr(i, ns.length()) == ns)
                {
                    c++;
                    i += ns.length() - 1;
                }

        if (c != n)
            ns =  "-1";
    }

    if (ns == "-1")
        output << "NO SOLUTION";
    else
        output << ns;

    input.close();
    output.close();
}

