//Exercise 9

#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    cout << "phone numbers list:"  << endl;
    map<string, unsigned long> phone_numbers = {
            {"Alex", 60001111},
            {"Betty", 60002222},
            {"Cindy", 60003333},
            {"Dorothy", 60004444},
    };

    for (auto it = phone_numbers.begin(); it != phone_numbers.end(); ++it)
        cout << it->first << " : " << it->second << endl;

    string key1{ "!@#$" };
    cout << "Input the name: ";
    cin >> key1;
    auto iter = phone_numbers.find(key1);
    if (iter == phone_numbers.end())
        cout <<"You don't have " << key1 << "'s phone number" << endl;
    else
        cout << key1 << "'s phone number is " << iter->second << endl;

    return 0;
}