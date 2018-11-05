#include <iostream>

using namespace std;

bool is_string_end(char string_symbol){

    return string_symbol == '\0';

}

int find_first_index_of(const char input[], const char substring[], int start_pos = 0){

    int substring_index = 0;

    int index = start_pos;

    for (; !is_string_end(input[index]) && !is_string_end(substring[substring_index]); ++index) {

        if (input[index] == substring[substring_index]) {

            ++substring_index;

        }

        else {

            substring_index = 0;

        }

    }

    return is_string_end(substring[substring_index]) ? (index - substring_index) : -1;

}

int main(){

    cout << "Please enter a string: ";

    char input_string[256];
    cin.getline(input_string, sizeof(input_string));

    cout << "Please enter a searched substr string: ";

    char searched_sub_string[256];
    cin.getline(searched_sub_string, sizeof(searched_sub_string));

    cout << "Index of seached string is " << find_first_index_of(input_string, searched_sub_string);
    cout << endl;
	return 0;
}