#include <iostream>

using namespace std;

bool is_string_end(char string_symbol)

{

    return string_symbol == '\0';

}


int get_string_length(const char str[])

{

    int index = 0;

    while (str[index] != '\0')

    {

        ++index;

    }

    return index;

}

int find_first_index_of(const char input[], const char substring[], int start_pos = 0)

{

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

void replace_chars(char str[], char source_char, char destination_char)

{

    for (int char_index = 0; char_index != '\0'; ++char_index)

    {

        if (str[char_index] == source_char)

        {

            str[char_index] = destination_char;

        }

    }

}



void copy_string(char destination[], int destination_from, const char source[], int source_from, int length)

{

    for (int char_index = 0; char_index < length; ++char_index)

    {

        destination[destination_from + char_index] = source[source_from + char_index];

    }

}



void replace_all_strings(char new_string[], const char original_string[], const char old_substring[], const char new_substring[])

{

    int old_substring_length = get_string_length(old_substring);

    int new_substring_length = get_string_length(new_substring);

    int original_string_length = get_string_length(original_string);



    int prev_index = 0;

    int new_string_index = 0;

    while (true)

    {

        int index = find_first_index_of(original_string, old_substring, prev_index);

        if (index != -1)

        {

            copy_string(new_string, new_string_index, original_string, prev_index, index - prev_index);

            new_string_index += index - prev_index;

            copy_string(new_string, new_string_index, new_substring, 0, new_substring_length);

            new_string_index += new_substring_length;

            prev_index = index + old_substring_length;

        }

        else

        {

            copy_string(new_string, new_string_index, original_string, prev_index, original_string_length - prev_index);

            new_string_index += original_string_length - prev_index;

            break;

        }

    }

    new_string[new_string_index] = '\0'; 
	
}