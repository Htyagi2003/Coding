#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <algorithm>

using namespace std;

struct City
{
    int goods;
    int entryTax;

    City(int g, int t) : goods(g), entryTax(t) {}
};

unordered_map<string, vector<pair<string, City>>> graph;

pair<string, int> dfs(string currentCity, set<string> &visited)
{
    visited.insert(currentCity);
    vector<pair<string, int>> options;

    for (const auto &neighbor : graph[currentCity])
    {
        if (visited.find(neighbor.first) == visited.end())
        {
            auto [route, tax] = dfs(neighbor.first, visited);
            options.emplace_back(route, tax + neighbor.second.entryTax);
        }
    }

    if (options.empty())
    {
        return {currentCity, 0};
    }

    sort(options.begin(), options.end(), [](const auto &a, const auto &b)
         {
        if (a.second != b.second) {
            return a.second < b.second;
        } else {
            return a.first < b.first;
        } });

    string route = currentCity;
    int totalTax = 0;

    for (const auto &option : options)
    {
        route += "-" + option.first;
        totalTax += option.second;
    }

    return {route, totalTax};
}

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N - 1; ++i)
    {
        string city1, city2;
        int goods, entryTax;

        cin >> city1 >> city2 >> goods >> entryTax;

        graph[city1].emplace_back(city2, City(goods, entryTax));
        graph[city2].emplace_back(city1, City(goods, entryTax));
    }

    set<string> visited;
    auto [route, totalTax] = dfs("hyderabad", visited);

    cout << route << endl;
    cout << totalTax << endl;

    return 0;
}
