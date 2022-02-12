#include <cstring>
#include <iostream>

using namespace std;

void reverse(char* str) {

    char* end = str;            // using pass by pointer so we can cycle through the string array using ++
    char tmp;                   // temp character for swapping the letters of the string

    while (*end != '\0') {      //finding the end of the string by moving the pointer each time the value is not the null value

        end++;
    }
    end--;                     // Once the end is found the pointer is then shifted back a position to the last character


    while (str < end) {          //looping through the string until the two pointers meet in the middle
        tmp = *str;               //set our first character to our tmp character
        *str++ = *end;            //set the last character of the string to the first character and then move the starting pointer to the second character
        *end-- = tmp;               //set the first character stored in tmp to the end of the string

    }
}

int main() {

    char str_1[] = "Helgen is Great!";
    char str_2[] = "Luke Treacy";
    char str_3[] = "Hello World!";
    char str_4[] = "Dublin City University";


    reverse(str_1);
    reverse(str_2);
    reverse(str_3);
    reverse(str_4);

    cout << str_1 << endl << str_2 << endl << str_3 << endl << str_4;
}
