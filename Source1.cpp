#include <iostream>
#include <cstdlib>
#include <stdlib.h>

void TrimRight(char* s) {
	char * tmp = s;
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

	const char* tmp = "123sdgfdsfgsdfgsdfgdsfgdsfgsdfgsdfgdsfgdsfgdsfgsdfgsdfgsdfgdsfgdsfgdsrfgsdfgsdfxg                        ";
	char* arr = new char[strlen(tmp) + 1];
	strcpy_s(arr, strlen(tmp) + 1, tmp);

	std::cout << arr << '.' << std::endl;
	TrimRight(arr);
	std::cout << arr << '.' << std::endl;

	delete[] arr;
	return 0;
}