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
    
    long long n, m,answer;

    input >> n >> m; 

    answer = 2 % m;
    for (int i = 1; i <= n; ++i) 
        answer = (answer * answer) % m;

    output << answer;

    input.close();
    output.close();
}
