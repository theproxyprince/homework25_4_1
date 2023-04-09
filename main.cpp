#include <iostream>
#include "actions.h"

int main() {

    std::string input;
    bool scalpelDid = 0;
    std::vector<Coordinates> buffer;
    do {
        std::cout << "Input(scalpel, tweezers, hemostat, suture): " << std::endl;
        std::getline(std::cin, input);

        if (input == "scalpel") {
            buffer = scalpel(Coordinates(), Coordinates());
            scalpelDid = true;
        } else if (input == "suture" && scalpelDid) {
            suture(buffer);
            break;
        } else if (input == "tweezers" && scalpelDid) {
            tweezers(Coordinates());
        } else if (input == "hemostat" && scalpelDid) {
            hemostat(Coordinates());
        }

        std::cin.ignore();

    } while (input != "end" && input != "End");

    std::cout << "Operation has ended!\n";
}
