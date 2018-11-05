#include <iostream>

using namespace std;

bool is_numerical_character(char c){

    return c >= '0' && c <= '9';
}

int string_to_int(const char string_number[]){

    int result_number = 0;
    int char_index = 0;
    int sign = +1;

    if (string_number[0] == '-') {

        sign = -1;
        char_index = 1;

    }

    int base = 10; 

    if (string_number[char_index] == '0' && string_number[char_index + 1] == 'x') {

        base = 16;
        char_index = char_index + 2;

    } else if (string_number[char_index] == '0' ) {

        base = 8;
        char_index = char_index + 1;

    }

    for (; string_number[char_index] != '\0'; ++char_index){
        char c = string_number[char_index];

        if (is_numerical_character(c)) {
            result_number = result_number * base + (c - '0');
        }
        else { 
            break;
        }
    }

    return sign * result_number;

}

int main(){

	char string_number[16];
    cin >> string_number;
    int int_number =  string_to_int(string_number);
	
    if (int_number != 0) {
        cout << int_number << " is valid." << endl;

    } else {
       	cout << string_number  << "is not valid or zero" << endl;
    }
	return 0;
}