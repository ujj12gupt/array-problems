#include <iostream>
#include <utility>
using namespace std;

int main() {
  pair<int, string> p;
  p= make_pair(44, "Edpresso");
  cout << "Pair created successfully" << endl;

  cout << "Pair's First Value: " << p.first << endl;
  cout << "Pair's Second Value: " << p.second;

  return 0;
}