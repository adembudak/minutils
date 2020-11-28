#include <filesystem>

int main(int argc, char *argv[]) {
  using namespace std;
  using namespace std::filesystem;

  if (argc > 1 && !exists(argv[1])) {
    error_code ec;
    create_directories(argv[1], ec);

    return ec.value();
  }
  return EXIT_FAILURE;
}

