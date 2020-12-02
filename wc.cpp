#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <iostream>

int main(int argc, char *argv[]) {
  using namespace std;
  if (argc > 1) {
    fstream f(argv[1]);
    vector<char> buf(istreambuf_iterator<char>(f), {});
    cout << count(begin(buf), end(buf), '\n') << ' ' << buf.size() << ' ' << argv[1] << '\n';
  }
}
