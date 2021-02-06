#include <filesystem>
#include <iostream>

int main(int argc, char *argv[]) {
  using namespace std;
  using namespace std::filesystem;

  if (argc > 1) {
    cout << path(argv[1]).filename().string() << '\n';
  }
  return EXIT_SUCCESS;
}

