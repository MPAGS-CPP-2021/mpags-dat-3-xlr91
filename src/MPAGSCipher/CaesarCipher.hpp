//make class here
//key should be only member variable
//key is the single argument
#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP

//and then implement constructor in the cpp 
#include <string>
#include <vector>

class CaesarCipher {
    public:
        explicit CaesarCipher(const std::size_t& cipherKey);
        explicit CaesarCipher(const std::string& cipherStringKey);
        
        
        std::string applyCipher(std::string& inputText, bool encryptFlag); //basically copy over runcaesarcipher?

        

    private:
        const std::vector<char> alphabet_ = {
            'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
            'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
            
        std::size_t key_{0};

};


#endif