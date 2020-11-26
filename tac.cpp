#include <vector>
#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char *args[]) {
  using namespace std;

  if (argc == 2) {
    fstream f(args[1]);
    std::vector<string> buf;

    string s;
    while (getline(f, s))
      buf.push_back(s);

    reverse(buf.begin(), buf.end());

    for (auto &i : buf)
      std::cout << i << '\n';
  }
  return EXIT_FAILURE;
}