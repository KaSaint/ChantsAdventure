#include "AdventureGameMap.hpp"

namespace chants
{
    AdventureGameMap::AdventureGameMap()
    {
        buildMapNodes();
    }

    AdventureGameMap::~AdventureGameMap()
    {
        for (Node* node : locations)
        {
            delete node;
        }
    }

    void AdventureGameMap::buildMapNodes()
    {
        // Create 20 nodes dynamically
        Node* home = new Node(0, "Home");
        home->Description = "You are standing in the front yard of a warm and comfortable home.";

        Node* mountain = new Node(1, "Mountain");
        mountain->Description = "A majestic mountain rises grandly from the landscape.";

        Node* city = new Node(2, "City");
        city->Description = "A bustling city, alive with the sounds of traffic.";

        Node* ocean = new Node(3, "Ocean");
        ocean->Description = "The ocean's restless waves crash onto the shoreline.";

        Node* island = new Node(4, "Island");
        island->Description = "An isolated island with jagged cliffs and lush greenery.";

        Node* forest = new Node(5, "Forest");
        forest->Description = "A dense forest with towering trees and rustling leaves.";

        Node* castle = new Node(6, "Castle");
        castle->Description = "An ancient castle with crumbling walls.";

        Node* swamp = new Node(7, "Swamp");
        swamp->Description = "A murky swamp with thick fog and croaking frogs.";

        Node* volcano = new Node(8, "Volcano");
        volcano->Description = "A looming volcano with molten lava at its summit.";

        Node* marketplace = new Node(9, "Marketplace");
        marketplace->Description = "A bustling marketplace filled with vibrant stalls.";

        Node* waterfall = new Node(10, "Waterfall");
        waterfall->Description = "A stunning waterfall cascading into a crystal-clear pool.";

        Node* ruins = new Node(11, "Ancient Ruins");
        ruins->Description = "The remains of a forgotten civilization, overgrown with vines.";

        Node* meadow = new Node(12, "Meadow");
        meadow->Description = "A peaceful meadow filled with colorful wildflowers.";

        Node* lighthouse = new Node(13, "Lighthouse");
        lighthouse->Description = "A towering lighthouse shining brightly over the dark sea.";

        Node* observatory = new Node(14, "Observatory");
        observatory->Description = "An observatory offering a stunning view of the stars.";

        Node* labyrinth = new Node(15, "Labyrinth");
        labyrinth->Description = "A maze of high hedges and winding paths.";

        Node* cave = new Node(16, "Cave");
        cave->Description = "A dark cave echoing with the sound of dripping water.";

        Node* quicksand = new Node(17, "Quicksand");
        quicksand->Description = "A patch of dangerous quicksand hidden among the terrain.";

        Node* hut = new Node(18, "Hut");
        hut->Description = "A small, weathered hut standing resiliently on the island.";

        Node* treasureRoom = new Node(19, "Treasure Room");
        treasureRoom->Description = "The legendary Treasure Room filled with unimaginable riches.";

        // Add connections (example connections)
        home->AddConnection(mountain);
        home->AddConnection(city);

        mountain->AddConnection(home);
        mountain->AddConnection(ocean);

        city->AddConnection(home);
        city->AddConnection(ocean);

        ocean->AddConnection(mountain);
        ocean->AddConnection(island);

        island->AddConnection(ocean);
        island->AddConnection(hut);

        hut->AddConnection(island);
        hut->AddConnection(quicksand);

        quicksand->AddConnection(hut);

        // Add nodes to the locations vector
        locations.push_back(home);
        locations.push_back(mountain);
        locations.push_back(city);
        locations.push_back(ocean);
        locations.push_back(island);
        locations.push_back(forest);
        locations.push_back(castle);
        locations.push_back(swamp);
        locations.push_back(volcano);
        locations.push_back(marketplace);
        locations.push_back(waterfall);
        locations.push_back(ruins);
        locations.push_back(meadow);
        locations.push_back(lighthouse);
        locations.push_back(observatory);
        locations.push_back(labyrinth);
        locations.push_back(cave);
        locations.push_back(quicksand);
        locations.push_back(hut);
        locations.push_back(treasureRoom);
    }

    std::vector<Node*>& AdventureGameMap::GetLocations()
    {
        return locations;
    }
}
