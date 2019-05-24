//
//  main.cpp
//  AStarAlgorithm
//
//  Created by Ozhan Turgut on 5/22/19.
//
//  This is a practice copying the work of daancode
//  https://github.com/daancode/a-star.git

#include <iostream>
#include "src/AStar.hpp"

int main(int argc, const char * argv[]) {
    
    AStar::Generator generator;
    generator.setWorldSize({25,25});
    generator.setHeuristic(AStar::Heuristic::euclidean);
    generator.setDiagonalMovement(true);
    
    std::cout << "Generate path... \n";
    auto path = generator.findPath({0,0}, {20,20});
    
    for (auto& coordinate:path){
        std::cout << coordinate.x << " " << coordinate.y << "\n";
    }
   
    return(0);
    
}
