#include "pch.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int wordCount(char chars[]) {
	int i = 0;
	int words = 1;
	for (; chars[i]; i++) {
		if (chars[i] == ' ') {
			words++;
			while (1)
				if (chars[i] == ' ')
					i++;
				else {
					i--;
					break;
				}
		}
	}

	return words;
}

int charCount(char chars[]) {
	int counter = 0;

	while (chars[counter] != 0){
		counter++;
	}
	return counter;
}
int main() {
	char array[50] = "this is a test message";
	cout << "Words: " << wordCount(array) << " Chars: " << charCount(array) << endl;

	return 0;
}