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

    for_each_n(buf.begin(), 10, [](auto &n) { std::cout << n << '\n'; });
  }
  return EXIT_FAILURE;
}