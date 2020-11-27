#include <iostream>
#include <string>
#include <memory>

extern char **environ;

int main() {
	using namespace std;
	for (int i = 0; environ[i] != nullptr; ++i) {
		cout << environ[i] << '\n';
	}

	return EXIT_SUCCESS;
}
