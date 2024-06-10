#include "developmentCard.hpp"

std::string KnightCard::getType() const {
    return "Knight";
}

void KnightCard::play(Player& player) {
    string terrain;
    int num;
    std::cout << "Enter a resource and a number of a tile you want to put the knight on (e.g., Agricultural Land 4 ): ";
    std::cin >> terrain >> num;
    Tile knight(terrain, num);
    this->knight = &knight;
    std::cout << "Knight card played by " << player.getName() << ": Move the robber." << std::endl;
}

std::string VictoryPointCard::getType() const {
    return "VictoryPoint";
}

void VictoryPointCard::play(Player& player) {
    // Implement logic for earning a victory point
    std::cout << "Victory Point card played by " << player.getName() << ": You earned a victory point!" << std::endl;
}

std::string MonopolyCard::getType() const {
    return "Progress: Monopoly";
}

void MonopolyCard::play(Player& player) {
    std::string resource;
    std::cout << "Enter the resource you want to monopolize: ";
    std::cin >> resource;
    // Implement logic to take all of the specified resource from other players
    std::cout << "Monopoly card played by " << player.getName() << ": All " << resource << " taken from other players." << std::endl;
}

std::string RoadBuildingCard::getType() const {
    return "Progress: RoadBuilding";
}

void RoadBuildingCard::play(Player& player) {
    // Implement logic to build two roads without cost
    std::cout << "Road Building card played by " << player.getName() << ": You can build two roads without cost." << std::endl;
}

std::string YearOfPlentyCard::getType() const {
    return "Progress: YearOfPlenty";
}

void YearOfPlentyCard::play(Player& player) {
    std::string resource1, resource2;
    std::cout << "Enter the first resource you want: ";
    std::cin >> resource1;
    std::cout << "Enter the second resource you want: ";
    std::cin >> resource2;
    // Implement logic to receive the specified resources from the bank
    std::cout << "Year of Plenty card played by " << player.getName() << ": You received " << resource1 << " and " << resource2 << " from the bank." << std::endl;
}