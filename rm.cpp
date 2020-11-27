#include <filesystem>
#include <iostream>

int main(int argc, char *argv[]) {

	using namespace std;
	using namespace std::filesystem;

	if (argc > 1) {
		error_code ec;
		remove(argv[1], ec);

		return ec.value();
	}
	return EXIT_FAILURE;
}

