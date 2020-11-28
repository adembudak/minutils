#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <random>

int main(int argc, char *args[]) {
  using namespace std;

  if (argc == 2) {
    fstream f(args[1]);
    vector<string> buf;

    string s;
    while (getline(f, s))
      buf.push_back(s);

    shuffle(buf.begin(), buf.end(), random_device());

    for (const auto &el : buf) {
      cout << el << '\n';
    }
    return EXIT_SUCCESS;
  }
  return EXIT_FAILURE;
}
