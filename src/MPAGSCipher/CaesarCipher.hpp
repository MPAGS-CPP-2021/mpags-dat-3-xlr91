//make class here
//key should be only member variable
//key is the single argument
#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP

//and then implement constructor in the cpp 
#include <string>

class CaesarCipher {
    public:
        explicit CaesarCipher(const std::size_t& cipherKey);
        explicit CaesarCipher(const std::string& cipherStringKey);
        
        std::size_t key;

};


#endif