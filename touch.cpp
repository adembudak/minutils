#include <filesystem>

int main(int argc, char *args[]) {
  if (argc == 2) {
    using namespace std;
    using namespace std::filesystem;

    error_code ec;
    last_write_time(args[1], file_time_type::clock::now(), ec);
    return ec.value();
  }
  return EXIT_FAILURE;
}
