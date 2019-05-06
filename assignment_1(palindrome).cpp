#include<iostream>
#include<string>

bool isPalindrome (std::string str) {
    int str_size = (int)str.size(); //get the string size

    for (int i = 0, j = str_size - 1; i < j;) {
        char ch_i = str[i];
        char ch_j = str[j];

        if (isalpha (ch_i) && isalpha (ch_j) ) {  // check is ch_i and ch_j a alphabet
            ch_i = tolower (ch_i);  // convert ch_i characters to lower case
            ch_j = tolower (ch_j);  // convert ch_j characters to lower case

            if (ch_i != ch_j) {
                return false;
            }

            i++, j--;

        } else {
            if (isalpha (ch_i) == false) {  // check ch_i is not a  alphabet
                i++;
            }

            if (isalpha (ch_j) == false) {   // check ch_j is not a alphabet
                j--;
            }
        }
    }

    return true;
}


int main() {
    std::string str;
    std::getline (std::cin, str);

    if (isPalindrome (str) == true) {
        std::cout << "It's a palindrome\n";

    } else {
        std::cout << "It's not a palindrome\n";
    }

    return 0;
}
