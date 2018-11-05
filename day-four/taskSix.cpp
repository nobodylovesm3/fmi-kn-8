#include <iostream>

using namespace std;

bool is_string_end(char string_symbol)

{

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

void decode_or_encode_message(const char message[], int key, char result_message[]) {

    const int alphabet_count = 26;



    int char_index = 0;

    for (; message[char_index] != '\0'; ++char_index) {

        char current_character = message[char_index];



        if (current_character >= 'a' && current_character <= 'z') {

            int alphabetical_index = current_character - 'a';

            int offset_from_a = (alphabet_count + alphabetical_index + key) % alphabet_count;

            result_message[char_index] = 'a' + offset_from_a;

        }

        else if (current_character >= 'A' && current_character <= 'Z') {

            int alphabetical_index = current_character - 'A';

            int offset_from_a = (alphabet_count + alphabetical_index + key) % alphabet_count;

            result_message[char_index] = 'A' + offset_from_a;

        }

    }

    result_message[char_index] = '\0';

}



void decode_message(const char message[], int key, char result_message[]) {

    decode_or_encode_message(message, -1 * key, result_message);

}



void encode_message(const char message[], int key, char result_message[]) {

    decode_or_encode_message(message, key, result_message);

}



int execute_caeser_cipher(const char operation[], int key, const char message[]) {



    char result_message[256];



    if (compare_strings(operation, "decode") == 0) {

        decode_message(message, key, result_message);

        cout << "Decoded message is " << result_message << endl;

    }

    else if (compare_strings(operation, "encode") == 0) {

        encode_message(message, key, result_message);

        cout << "Encoded message is " << result_message << endl;

    }

    else {

        cout << "Wrong operation - it should be encode or decode and not " << operation << endl;

        return 1;

    }

    return 0;

}



int main(){

    cout << "Please enter in one of the following formats: "

                 "encode <key> <message-to-encode> or "

                 "decode <key> <message-to-decode> \n";

    char operation[16];

    cin >> operation;

    int key;

    cin >> key;

    char message[256];

    cin >> message;



    execute_caeser_cipher(operation, key, message);

}