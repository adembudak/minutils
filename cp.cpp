#include <filesystem>
#include <string>

int main(int argc, char *argv[]) {
  using namespace std;
  using namespace std::filesystem;
  if (argc > 2) {
    error_code ec;

    if (string(argv[1]) == "-r") {
      copy(argv[2], argv[3], copy_options::recursive, ec);
    } else {
      copy(argv[1], argv[2], copy_options::none, ec);
    }

    return ec.value();
  }
  return EXIT_FAILURE;
}
