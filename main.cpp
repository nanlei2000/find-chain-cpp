#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

  string res = "";
  for (const string &word : msg)
  {
    res += word + " ";
  }
  cout << res << endl;
}