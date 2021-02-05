#include <fstream>
#include <iterator>
#include <algorithm>

int main(int argc, const char *const argv[]) {
  using namespace std;
  if (argc == 3) {
    ifstream first{argv[1]}, second{argv[2]};
    return !equal(istreambuf_iterator<char>(first), {}, istreambuf_iterator<char>{second}, {});
  }
}
