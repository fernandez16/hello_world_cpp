#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    vector<string> message {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    
    int index = 1;

    for (const string& word : message)
    {
        cout << word << " ";
        ++index;
    }

    cout << endl;
}