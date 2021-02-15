#include <filesystem>
#include <string_view>

int main(int argc, const char *const argv[]) {
  using namespace std;
  using namespace std::filesystem;

  if (argc == 4) {
    error_code ec;
    string_view arg = argv[1];

    if (arg == "-s") {
      create_symlink(argv[2], argv[3], ec);
    }

    return ec.value();
  }
  return EXIT_FAILURE;
}

