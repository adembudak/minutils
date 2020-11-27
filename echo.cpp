#include <iostream>

int main(int argc, char *argv[]) {
	using namespace std;
	if (argc > 1) {
		for (int i = 1; i < argc; ++i)
			cout << argv[i] << ' ';
		cout << '\n';
	}
}
