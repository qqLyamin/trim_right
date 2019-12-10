#include <iostream>
#include <cstdlib>
#include <stdlib.h>

void TrimRight(char* s) {
	char* tmp = s;
	while (*tmp != '\0')
	{
		++tmp;
	}

	--tmp;
	while (*tmp == ' ') {
		*tmp = '\0';
		--tmp;
	}
}

int main() {

	const char* tmp = "sdfsfin243fn98394fh24-gh724-g=-h32-dnc81cb          ";
	char* arr = new char[sizeof(tmp) + 1];
	strcpy(arr, tmp);

	std::cout << arr << '.' << std::endl;
	TrimRight(arr);
	std::cout << arr << '.' << std::endl;

	return 0;
}