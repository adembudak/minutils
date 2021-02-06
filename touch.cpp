#include <filesystem>
#include <fstream>

int main(int argc, char *argv[]) {
  using namespace std;
  using namespace std::filesystem;

  if (argc == 2) {
    if (!exists(argv[1])) {
      ofstream f{argv[1]};
      return EXIT_SUCCESS;
    } else {
      error_code ec;
      last_write_time(argv[1], file_time_type::clock::now(), ec);
      return ec.value();
    }
  }
  return EXIT_FAILURE;
}
