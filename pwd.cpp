#include <filesystem>
#include <iostream>

int main() {
	using namespace std;
	using namespace std::filesystem;

	error_code ec;
	cout << current_path(ec).string() << '\n';
	return ec.value();
}

