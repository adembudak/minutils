#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  using namespace std;
  if (argc > 1) {
    string s;
    for (int i = 1; i < argc; i++) {
      s += argv[i];
      s += ' ';
    }
    for (;;) {
      cout << s << '\n';
    }
  } else {
    for (;;) {
      cout << 'y' << '\n';
    }
  }
}
