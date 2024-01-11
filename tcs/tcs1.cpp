#include <iostream>
#include <cmath>

std::string toWord(int n)
{
    if (n == 1)
        return "one";
    else if (n == 2)
        return "two";
    else if (n == 3)
        return "thr";
    else if (n == 4)
        return "fou";
    else if (n == 5)
        return "fiv";
    else if (n == 6)
        return "six";
    else if (n == 7)
        return "sev";
    else if (n == 8)
        return "eig";
    else if (n == 9)
        return "nin";
    else if (n == 0)
        return "zer";
}

int toSum(int s)
{
    if (s == 0)
        return 0;
    else if (s % 9 == 0)
        return 9;
    else
        return s % 9;
}
int main()
{
    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i)
    {
        std::string n, name;
        std::cin >> n >> name;

        int nhy = name.length();

        int d1 = 0;
        if (n.find('.') != std::string::npos)
        {
            d1 = n.find('.');
        }

        int d2 = n.length();
        int l = d2 - d1;
        int f = 0;

        if (n[0] == '-')
        {
            f = 1;
            n = n.substr(1);
        }

        bool r = true;
        try
        {
            std::stof(n);
        }
        catch (...)
        {
            r = false;
        }

        if (!r)
        {
            std::cout << "Invalid" << (i < t - 1 ? "" : "\n");
        }
        else
        {
            auto c = std::to_string(std::stof(n));
            auto p = c.find('e');
            auto nhjhjghgh = c.substr(0, p);
            auto k = std::stoi(c.substr(p + 1));

            std::string re = (f == 1) ? "-" : "";
            re += toWord(std::stoi(nhjhjghgh)) + "." + toWord(toSum(std::stoi(nhjhjghgh.substr(p + 1)))) + "e";

            if (k > 0)
            {
                re += '+';
            }
            else if (k < 0)
            {
                re += '-';
            }

            re += toWord(std::abs(k)) + "@";

            if (k % 2 != 0)
            {
                for (int x = 0; x < nhy; x += 2)
                {
                    re += name[x];
                }
            }
            else
            {
                for (int x = 1; x < nhy; x += 2)
                {
                    re += name[x];
                }
            }

            std::cout << re << (i < t - 1 ? "" : "\n");
        }
    }

    return 0;
}
