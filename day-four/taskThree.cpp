#include <iostream>

using namespace std;


bool is_string_end(char string_symbol){
    
	return string_symbol == '\0';
}


int compare_strings(const char left_string[], const char right_string[])

{

    int index = 0;

    while (true)

    {

        if (is_string_end(left_string[index]) && is_string_end(right_string[index]))

        {

            return 0;

        }

        if (is_string_end(left_string[index]))

        {

            return -1;

        }

        if (is_string_end(right_string[index]))

        {

            return +1;

        }

        if (left_string[index] < right_string[index])

        {

            return -1;

        }

        if (left_string[index] > right_string[index])

        {

            return +1;

        }

        ++index;

    }

}

int main(){

	cout << "Please enter a string 1: ";
    char left_string[256];
    cin.getline(left_string, sizeof(left_string));

   	cout << "Please enter a string 2: ";
    char right_string[256];
    cin.getline(right_string, sizeof(right_string));

    cout << "Comparison is " << compare_strings(left_string, right_string)<<endl;
}