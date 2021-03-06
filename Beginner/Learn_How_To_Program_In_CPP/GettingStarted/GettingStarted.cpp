#include <iostream>


bool isValidGuess(int num, int answer){
	/*
	 *@param num: (int) the guessed number by the user
	 *@param answer: (int) the correct answer saved in the program
	 */
	if (num == answer){
		std::cout << "Well done you got it right!" << std::endl;
		return true;
	}
	return false;
}


int main(int argc, char **argv) {
	std::cout << "=======================================" << std::endl;
	std::cout << "\t" << "Guess The Saved Number" << "\t" << std::endl;
	std::cout << "=======================================" << std::endl;
	bool keepGoing = true;
	int n = 0, answer = 11;
	while (keepGoing){
		std::cout << "enter a guess: ";
		std::cin >> n;
		if (!isValidGuess(n, answer)){
			std::string msg;
			if (n > answer){
				 msg = "your guess is bigger a bit than the correct answer";
			}
			else{
				msg = "your guess is smaller a bit than the correct answer";
			}
			std::cout << msg << std::endl;
		}
		else{
			keepGoing = false;
		}
	}
	return 0;
}

