#include <iostream>
#include <fstream>
#include <vector>

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

    string s, s1;
    input >> s >> s1;
    int h1, min1, sec1, sum1;
    int h2, min2, sec2, sum2;
    int one = 0, two = 0, three = 0, four = 0, fife = 0, six = 0, seven = 0, eight = 0, nine = 0, zero = 0;
    h1 = (s[0] - 48) * 10 + s[1] - 48;
    min1 = (s[3] - 48) * 10 + s[4] - 48;
    sec1 = (s[6] - 48) * 10 + s[7] - 48;
    sum1 = h1 * 3600 + min1 * 60 + sec1;

    h2 = (s1[0] - 48) * 10 + s1[1] - 48;
    min2 = (s1[3] - 48) * 10 + s1[4] - 48;
    sec2 = (s1[6] - 48) * 10 + s1[7] - 48;
    sum2 = h2 * 3600 + min2 * 60 + sec2;
    int ssum1;
    while (sum1 <= sum2) {
        ssum1 = sum1;
        h1 = ssum1 / 3600;
        min1 = (ssum1 - (h1 * 3600)) / 60;
        sec1 = ssum1 - ((h1 * 3600) + (min1 * 60));
        if (h1 % 10 == 0)
            zero++;
        if (h1 % 10 == 1)
            one++;
        if (h1 % 10 == 2)
            two++;
        if (h1 % 10 == 3)
            three++;
        if (h1 % 10 == 4)
            four++;
        if (h1 % 10 == 5)
            fife++;
        if (h1 % 10 == 6)
            six++;
        if (h1 % 10 == 7)
            seven++;
        if (h1 % 10 == 8)
            eight++;
        if (h1 % 10 == 9)
            nine++;
        if (h1 < 10)
            zero++;
        else {
            if (h1 / 10 == 0)
                zero++;
            if (h1 / 10 == 1)
                one++;
            if (h1 / 10 == 2)
                two++;
            if (h1 / 10 == 3)
                three++;
            if (h1 / 10 == 4)
                four++;
            if (h1 / 10 == 5)
                fife++;
            if (h1 / 10 == 6)
                six++;
            if (h1 / 10 == 7)
                seven++;
            if (h1 / 10 == 8)
                eight++;
            if (h1 / 10 == 9)
                nine++;
        }
        if (min1 % 10 == 0)
            zero++;
        if (min1 % 10 == 1)
            one++;
        if (min1 % 10 == 2)
            two++;
        if (min1 % 10 == 3)
            three++;
        if (min1 % 10 == 4)
            four++;
        if (min1 % 10 == 5)
            fife++;
        if (min1 % 10 == 6)
            six++;
        if (min1 % 10 == 7)
            seven++;
        if (min1 % 10 == 8)
            eight++;
        if (min1 % 10 == 9)
            nine++;
        if (min1 < 10)
            zero++;
        else {
            if (min1 / 10 == 0)
                zero++;
            if (min1 / 10 == 1)
                one++;
            if (min1 / 10 == 2)
                two++;
            if (min1 / 10 == 3)
                three++;
            if (min1 / 10 == 4)
                four++;
            if (min1 / 10 == 5)
                fife++;
            if (min1 / 10 == 6)
                six++;
            if (min1 / 10 == 7)
                seven++;
            if (min1 / 10 == 8)
                eight++;
            if (min1 / 10 == 9)
                nine++;
        }
        if (sec1 % 10 == 0)
            zero++;
        if (sec1 % 10 == 1)
            one++;
        if (sec1 % 10 == 2)
            two++;
        if (sec1 % 10 == 3)
            three++;
        if (sec1 % 10 == 4)
            four++;
        if (sec1 % 10 == 5)
            fife++;
        if (sec1 % 10 == 6)
            six++;
        if (sec1 % 10 == 7)
            seven++;
        if (sec1 % 10 == 8)
            eight++;
        if (sec1 % 10 == 9)
            nine++;
        if (sec1 < 10)
            zero++;
        else {
            if (sec1 / 10 == 0)
                zero++;
            if (sec1 / 10 == 1)
                one++;
            if (sec1 / 10 == 2)
                two++;
            if (sec1 / 10 == 3)
                three++;
            if (sec1 / 10 == 4)
                four++;
            if (sec1 / 10 == 5)
                fife++;
            if (sec1 / 10 == 6)
                six++;
            if (sec1 / 10 == 7)
                seven++;
            if (sec1 / 10 == 8)
                eight++;
            if (sec1 / 10 == 9)
                nine++;
        }
        sum1++;
    }
    cout << zero << endl;
    cout << one << endl;
    cout << two << endl;
    cout << three << endl;
    cout << four << endl;
    cout << fife << endl;
    cout << six << endl;
    cout << seven << endl;
    cout << eight << endl;
    cout << nine << endl;

    input.close();
    output.close();

}

