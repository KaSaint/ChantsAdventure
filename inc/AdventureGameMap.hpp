#pragma once

#include <string>
#include <vector>
#include "Node.hpp"

namespace chants
{
    /**
     * @class AdventureGameMap
     * @brief Represents the game map for Chants Adventure.
     * 
     * The AdventureGameMap class manages the nodes (locations) in the game,
     * including their connections and cleanup.
     */
    class AdventureGameMap
    {
    private:
        /**
         * @brief Stores pointers to all the nodes in the game.
         * 
         * Each node represents a location in the game map.
         */
        std::vector<Node*> locations;

        /**
         * @brief Builds the map nodes and establishes their connections.
         * 
         * This method initializes all the locations in the game and connects them
         * according to the game map design.
         */
        void buildMapNodes();

    public:
        /**
         * @brief Constructs the AdventureGameMap object.
         * 
         * Initializes the game map by building nodes and connections.
         */
        AdventureGameMap();

        /**
         * @brief Destroys the AdventureGameMap object.
         * 
         * Cleans up all dynamically allocated nodes to prevent memory leaks.
         */
        ~AdventureGameMap();

        /**
         * @brief Retrieves the list of nodes (locations) in the game map.
         * 
         * @return A reference to the vector of node pointers.
         */
        std::vector<Node*>& GetLocations();
    };
}
