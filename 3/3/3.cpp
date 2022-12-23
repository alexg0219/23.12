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

    string s1, s2, s3,answer;
    input >> s1 >> s2 >> s3;

    if (s1 >= s2)
        answer = s1;
    else
        answer = s2;

    if (s3 >= answer)
        answer = s3;

    output << answer;

    input.close();
    output.close();
}

