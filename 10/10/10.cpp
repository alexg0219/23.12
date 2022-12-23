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

	int n,d,counter=0;
    input >> n;

	for (int a = 1; a < n; a++)
		for (int b = a; b < n/2; b++)
			for (int c = b; c < n/2; c++)
			{
				d = n - (a + b + c);
				if (d >= c)
					if (a+b+c+d == n)
						counter += 1;
			}

	output << counter;

	input.close();
	output.close();
}