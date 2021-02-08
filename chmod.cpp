#include <filesystem>
#include <cstdlib> // for atoi
#include <map>

int main(int argc, char *argv[]) {
  using namespace std;
  using namespace std::filesystem;

  if (argc == 3) {

    map<unsigned, perms> other_perms{{0, perms::none},
                                     {1, perms::others_exec},
                                     {2, perms::others_write},
                                     {3, perms::others_write | perms::others_exec},
                                     {4, perms::others_read},
                                     {5, perms::others_read | perms::others_exec},
                                     {5, perms::others_read | perms::others_write},
                                     {7, perms::others_all}};

    map<unsigned, perms> group_perms{{0, perms::none},
                                     {1, perms::group_exec},
                                     {2, perms::group_write},
                                     {3, perms::group_write | perms::group_exec},
                                     {4, perms::group_read},
                                     {5, perms::group_read | perms::group_exec},
                                     {5, perms::group_read | perms::group_write},
                                     {7, perms::group_all}};

    map<unsigned, perms> owner_perms{{0, perms::none},
                                     {1, perms::owner_exec},
                                     {2, perms::owner_write},
                                     {3, perms::owner_write | perms::owner_exec},
                                     {4, perms::owner_read},
                                     {5, perms::owner_read | perms::owner_exec},
                                     {5, perms::owner_read | perms::owner_write},
                                     {7, perms::owner_all}};

    error_code ec;
    unsigned perm = static_cast<unsigned>(atoi(argv[1]));

    unsigned other = perm % 10;
    unsigned group = (perm / 10) % 10;
    unsigned owner = perm / 100;

    // clang-format off
    permissions(argv[2], perms::owner_all & owner_perms[owner] |
                         perms::group_all & group_perms[group] |
                         perms::others_all & other_perms[other], ec);

    return ec.value();
  }

  return EXIT_FAILURE;
}

