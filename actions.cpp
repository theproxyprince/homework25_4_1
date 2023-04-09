#include "actions.h"

std::vector<Coordinates> scalpel(Coordinates begin, Coordinates end) {
    std::vector<Coordinates> coordinates;
    std::cout << "First point. ";
    begin.input();
    std::cout << "Second point. ";
    end.input();
    coordinates.push_back(begin);
    coordinates.push_back(end);

    std::cout << "The cut was successfully conducted between (" << begin.x << ", " << begin.y << ") and (" <<
                 end.x << ", " << end.y << ")" << std::endl;


    return coordinates;
}

void hemostat(Coordinates position) {
    position.input();
    std::cout << "Hemostat is provided at (" << position.x << ", " << position.y << ")\n";
}
void tweezers(Coordinates position) {
    position.input();
    std::cout << "Tweezers is provided at (" << position.x << ", " << position.y << ")\n";
}

void suture(std::vector<Coordinates> position) {
    std::cout << "The suture was successfully conducted between (" << position[0].x << ", " << position[0].y << ") and (" <<
              position[1].x << ", " << position[1].y << ")" << std::endl;
}
