#include <iostream>
#include <cctype>

int main()
{
	char sentence[100];
	int upperCase = 0, lowerCase = 0, spaces = 0, vowels = 0;
	int consonants = 0, punctuations = 0, digits = 0, letters = 0;

	std::cout << "Enter any sentence: ";
	std::cin.getline(sentence, 100);

	for (int counter = 0; counter < 100; ++counter)
	{
		if (isupper(sentence[counter]))
		{
			++upperCase;
		}
	}
	/*
	if (sentence[counter] == 'A' || sentence[counter] == 'E' || sentence[counter] == 'I'
					|| sentence[counter] == 'O' || sentence[counter] == 'U')
				{
					++vowels;
				}
				else
				{
					++consonants;
				}
			if (sentence[counter] >= 'a' && sentence[counter] <= 'z')
			{
				++lowerCase;

				if (sentence[counter] == 'a' || sentence[counter] == 'e' || sentence[counter] == 'i'
					|| sentence[counter] == 'o' || sentence[counter] == 'u')
				{
					++vowels;
				}
				else
				{
					++consonants;
				}
			}

			if (sentence[counter] == ' ')
			{
				++spaces;
			}
		}


	*/
	std::cout << "\nUppercase letters: " << upperCase;
	std::cout << "\nLowercase letters: " << lowerCase;
	std::cout << "\nSpaces: " << spaces;
	std::cout << "\nVowels: " << vowels;
	std::cout << "\nConsonants: " << consonants;
	std::cout << "\nPunctuations: " << punctuations;
	std::cout << "\nDigits: " << digits;
	std::cout << "\nLetters: " << letters;


	std::cout << '\n';
}