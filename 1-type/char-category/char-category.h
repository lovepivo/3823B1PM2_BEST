#include <stdbool.h>


bool is_digit(char x) {
    if (x<58 && x>47){
        return true;
    }
    return false;
}

bool is_letter(char x) {
    if ((x>64 && x<91) || (x>96 && x<123)){
        return true;
    }
    return false;
}

bool is_punctuation(char x) {
    if ((x>32 && x<48) || (x>57 && x<65) || (x>32 && x<48) || (x>90 && x<97) || (x>122 && x<127)){
        return true;
    }
    return false;
}

int get_ascii_code(char first, char second, char third) {
    int a=first, b=second, c=third, d;
    d=a*1000000+b*1000+c;
    return d; // No implementation
}

