//326648532
//menashe7676@gmail.com

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <vector>
#include <set>
#include "board.hpp"
#include "tile.hpp"
#include "settlement.hpp"
#include "city.hpp"
#include "road.hpp"
#include "developmentCard.hpp"
#include <string>

using namespace std;

namespace ariel {
    class Player {
    private:
        void showCards() const;
        std::vector<DevelopmentCard> developmentCards;

    public:
        string name;
        set<Settlement> possibleSettlements;
        set<Road> possibleRoads;
        set<Settlement> mySettlements;
        set<Road> myRoads;
        set<City> myCities;

        int wood; // עץ
        int bricks; // לבנה
        int wheat; // שיבולת
        int ore; // ברזל
        int wool; // צמר 

        Player();
        Player(string name);
        string getName() const;
        bool isPossibleRoad(Road myRoad);
        bool isPossibleSettlement(Settlement mySettelemnt);
        void placeSettelemnt(vector<string> places, vector<int> placesNum,Board &board);
        void placeRoad(vector<string> places, vector<int> placesNum,Board &board);
        void placeCity(vector<string> places, vector<int> placesNum,Board &board);
        void distributeResources(int num, Tile knight);
        void getCards(string resource, int amount);
        bool resource_exist(string resource, int num);
        void discardCards();
        void playDevelopmentCard(DevelopmentCard& card);
        void buyDevelopmentCard();
        void printPoints();

        bool operator==(const Player &player) const;
    };
}

#endif