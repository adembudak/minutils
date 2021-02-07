#include <filesystem>
#include <cstdlib>

int main(int argc, const char *const argv[]) {
  using namespace std;
  using namespace std::filesystem;

  if (argc == 3) {
    error_code ec;
    permissions(argv[1], static_cast<perms>(atoi(argv[2])), ec);
    return ec.value();
  }

  return EXIT_FAILURE;
}

