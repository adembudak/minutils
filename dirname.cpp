#include <filesystem>
#include <iostream>

int main(int argc, char *argv[]) {
  using namespace std;
  using namespace std::filesystem;

  if (argc > 1) {
    if (argv[1][0] == '.')
      cout << ".\n";
    else
      cout << path(argv[1]).parent_path().string() << '\n';
  }
}
