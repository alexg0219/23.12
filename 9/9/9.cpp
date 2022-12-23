#include <iostream>
#include <vector>
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

    int n,min=INT_MAX,max=INT_MIN,summ,a=INT_MAX,answer;
    input >> n;
    vector <int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    for (int i = min; i < max+1; i++)
    {
        summ = 0;
        for (auto j : arr)
        {
            summ += abs(j - i);
        }

        if (summ <= a)
        {
            a = summ;
            answer = i;
        }
    }

    output << answer;

    input.close();
    output.close();
}