#include <iostream>
#include <cctype>

#define log(x, y) std::cout << x << y << std::endl;


int main()
{
	//initialization
	const int sentenceLength = 100;
	char sentence[sentenceLength];
	int upperCase = 0, lowerCase = 0, space = 0, vowels = 0;
	int consonants = 0, punctuations = 0, digits = 0, letters = 0;

	std::cout << "Enter sentence: ";
	std::cin.getline(sentence, 100);


	//check each array subscript
	for (int counter = 0; counter < strlen(sentence); ++counter)
	{

		//condition if array is uppercase letter
		if (isupper(sentence[counter]))
			++upperCase;

		//condition if array is lowercase letter
		if (islower(sentence[counter]))
			++lowerCase;

		//condition if array has blank space
		if (isspace(sentence[counter]))
			++space;

		//condition to check if array has a letter 
		if (isalpha(sentence[counter]))
		{
			++letters;

			//condition to check if the array has a vowel
			if (sentence[counter] == 'a' || sentence[counter] == 'e' || sentence[counter] == 'i'
				|| sentence[counter] == 'o' || sentence[counter] == 'u' || sentence[counter] == 'A'
				|| sentence[counter] == 'E' || sentence[counter] == 'I' || sentence[counter] == 'O'
				|| sentence[counter] == 'U')
				++vowels;
			//condition to check if the array is consonant
			else
				++consonants;
		}

		//condition to check if array has a punctuation
		if (ispunct(sentence[counter]))
			++punctuations;

		//condition to check if array has a letter
		if (isdigit(sentence[counter]))
			++digits;

	}

	//log output
	std::cout << '\n';
	log("Uppercase Letters: ", upperCase)
	log("Lowercase Letters: ", lowerCase)
	log("Spaces: ", space)
	log("Vowels: ", vowels)
	log("Consonants: ", consonants)
	log("Punctuations: ", punctuations)
	log("Digits: ", digits)
	log("Letters: ", letters)

	return 0;
}