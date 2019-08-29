//
//  main.cpp
//  SectionChallenge
//
//  Created by John Morris on 8/29/19.
//  Copyright © 2019 John Morris. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int favoriteNumber;
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favoriteNumber;
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    std::cout << "No!!! Really " << favoriteNumber << " is my favorite number!" << std::endl;
    return 0;
}
