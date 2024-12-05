#include <iostream>
#include <vector>
#include "Node.hpp"
#include "Asset.hpp"

using namespace std;
using namespace chants;

/**
 * @brief Clears the console screen (disabled for debugging).
 */
void clearScreen()
{
    /// clearScreen();
}

/**
 * @brief Displays details about the current node, including its connections and assets.
 * 
 * @param viewPort The current node being visited.
 */
void AtNode(Node& viewPort)
{
    /// clearScreen();

    cout << "Location: " << viewPort.GetName() << "\n";
    cout << viewPort.Description << "\n";

    cout << "Paths from here:\n";
    for (Node* node : viewPort.GetConnections())
    {
        cout << node->GetId() << ": " << node->GetName() << "\n";
    }

    if (!viewPort.GetAssets().empty())
    {
        cout << "Assets at this location:\n";
        for (const Asset& asset : viewPort.GetAssets())
        {
            cout << "- " << asset.GetName() << "\n";
        }
    }

    cout << "\n";
}

/**
 * @brief Main function to initialize and run the Chants Adventure game.
 * 
 * This function sets up the game map, assets, and game logic. It also handles
 * player interactions, such as moving between locations, picking up assets, 
 * and inspecting inventory.
 * 
 * @return int Program exit status.
 */
int main()
{
    // Welcome message
    cout << "Welcome to Chants Adventure!\n";
    cout << "Your goal is to explore the map, collect items, and find the Treasure Room.\n";
    cout << "Beware of dangers lurking in the trail!\n";
    cout << "Remember, you'll need the Golden Key to access the Treasure Room!\n\n";

    // Create nodes
    vector<Node*> gameMap;
    gameMap.push_back(new Node(0, "Home"));
    gameMap.push_back(new Node(1, "Mountain"));
    gameMap.push_back(new Node(2, "City"));
    gameMap.push_back(new Node(3, "Forest"));
    gameMap.push_back(new Node(4, "River"));
    gameMap.push_back(new Node(5, "Cave"));
    gameMap.push_back(new Node(6, "Beach"));
    gameMap.push_back(new Node(7, "Village"));
    gameMap.push_back(new Node(8, "Castle"));
    gameMap.push_back(new Node(9, "Swamp"));
    gameMap.push_back(new Node(10, "Marketplace"));
    gameMap.push_back(new Node(11, "Ruins"));
    gameMap.push_back(new Node(12, "Lighthouse"));
    gameMap.push_back(new Node(13, "Observatory"));
    gameMap.push_back(new Node(14, "Labyrinth"));
    gameMap.push_back(new Node(15, "Waterfall"));
    gameMap.push_back(new Node(16, "Meadow"));
    gameMap.push_back(new Node(17, "Volcano"));
    gameMap.push_back(new Node(18, "Hut"));
    gameMap.push_back(new Node(19, "Treasure Room"));

    // Add descriptions
    gameMap[0]->Description = "A warm and welcoming home.";
    gameMap[1]->Description = "A majestic mountain that towers above the landscape.";
    gameMap[2]->Description = "A bustling city filled with life.";
    gameMap[3]->Description = "A dense forest teeming with wildlife.";
    gameMap[4]->Description = "A tranquil river with crystal-clear water.";
    gameMap[5]->Description = "A dark, mysterious cave.";
    gameMap[6]->Description = "A serene beach with soft sand.";
    gameMap[7]->Description = "A small, peaceful village.";
    gameMap[8]->Description = "A grand castle with towering walls.";
    gameMap[9]->Description = "A murky swamp with thick fog.";
    gameMap[10]->Description = "A vibrant marketplace filled with merchants.";
    gameMap[11]->Description = "Ruins of an ancient civilization.";
    gameMap[12]->Description = "A lighthouse guiding ships safely.";
    gameMap[13]->Description = "An observatory perched high on a hill.";
    gameMap[14]->Description = "A confusing labyrinth of hedges.";
    gameMap[15]->Description = "A stunning waterfall cascading into a pool.";
    gameMap[16]->Description = "A meadow filled with blooming flowers.";
    gameMap[17]->Description = "A rumbling volcano with glowing lava.";
    gameMap[18]->Description = "A small, weathered hut.";
    gameMap[19]->Description = "The legendary Treasure Room filled with riches.";

    // Add connections
    gameMap[0]->AddConnection(gameMap[1]);  
    gameMap[0]->AddConnection(gameMap[2]);
    gameMap[1]->AddConnection(gameMap[3]); 
    gameMap[1]->AddConnection(gameMap[0]); 
    gameMap[2]->AddConnection(gameMap[0]); 
    gameMap[2]->AddConnection(gameMap[4]); 
    gameMap[3]->AddConnection(gameMap[1]); 
    gameMap[3]->AddConnection(gameMap[5]); 
    gameMap[4]->AddConnection(gameMap[2]); 
    gameMap[4]->AddConnection(gameMap[6]); 
    gameMap[5]->AddConnection(gameMap[3]); 
    gameMap[5]->AddConnection(gameMap[7]); 
    gameMap[6]->AddConnection(gameMap[4]); 
    gameMap[6]->AddConnection(gameMap[8]); 
    gameMap[7]->AddConnection(gameMap[5]); 
    gameMap[7]->AddConnection(gameMap[9]); 
    gameMap[8]->AddConnection(gameMap[6]); 
    gameMap[8]->AddConnection(gameMap[10]);
    gameMap[9]->AddConnection(gameMap[7]); 
    gameMap[9]->AddConnection(gameMap[11]);
    gameMap[10]->AddConnection(gameMap[8]);
    gameMap[10]->AddConnection(gameMap[12]);
    gameMap[11]->AddConnection(gameMap[9]);
    gameMap[11]->AddConnection(gameMap[13]);
    gameMap[12]->AddConnection(gameMap[10]);
    gameMap[12]->AddConnection(gameMap[14]);
    gameMap[13]->AddConnection(gameMap[11]);
    gameMap[13]->AddConnection(gameMap[15]);
    gameMap[14]->AddConnection(gameMap[12]);
    gameMap[14]->AddConnection(gameMap[16]);
    gameMap[15]->AddConnection(gameMap[13]);
    gameMap[15]->AddConnection(gameMap[17]);
    gameMap[16]->AddConnection(gameMap[14]);
    gameMap[16]->AddConnection(gameMap[18]);
    gameMap[17]->AddConnection(gameMap[15]);
    gameMap[17]->AddConnection(gameMap[19]);
    gameMap[18]->AddConnection(gameMap[16]);
    gameMap[18]->AddConnection(gameMap[19]);
    gameMap[19]->AddConnection(gameMap[17]);
    gameMap[19]->AddConnection(gameMap[18]);

    // Add assets
    Asset goldenKey("Golden Key", "A key to unlock the Treasure Room.", 0, false);
    gameMap[14]->AddAsset(goldenKey); 

    Asset silverCoin("Silver Coin", "A shiny coin with mysterious engravings.", 1, false);
    gameMap[1]->AddAsset(silverCoin); 

    Asset ancientScroll("Ancient Scroll", "A scroll written in an ancient language.", 2, false);
    gameMap[8]->AddAsset(ancientScroll);

    Asset magicRing("Magic Ring", "A ring that glows faintly in the dark.", 3, false);
    gameMap[9]->AddAsset(magicRing); 

    int turnsRemaining = 30;
    int nodePointer = 0;
    vector<Asset> inventory;

    while (turnsRemaining > 0)
    {
        Node& currentNode = *gameMap[nodePointer];
        AtNode(currentNode);

        cout << "Turns Remaining: " << turnsRemaining << "\n";
        cout << "Available Actions:\n";
        cout << "1. Move to another location\n";

        if (!currentNode.GetAssets().empty())
        {
            cout << "2. Pick up \"" << currentNode.GetAssets().front().GetName() << "\"\n";
        }

        cout << "3. Inspect an item (and view inventory)\n";
        cout << "Choose an action (type 'x' to exit): ";

        string input;
        cin >> input;

        if (input == "x" || input == "X")
        {
            cout << "Exiting the game. Goodbye!\n";
            break;
        }

        int choice = stoi(input);

        if (choice == 1)
        {
            cout << "You can move to the following locations:\n";
            for (Node* connectedNode : currentNode.GetConnections())
            {
                cout << connectedNode->GetId() << ": " << connectedNode->GetName() << "\n";
            }

            cout << "Enter the ID of the location you'd like to go to: ";
            int nextNodeId;
            cin >> nextNodeId;

            Node* nextNode = nullptr;
            for (Node* connectedNode : currentNode.GetConnections())
            {
                if (connectedNode->GetId() == nextNodeId)
                {
                    nextNode = connectedNode;
                    break;
                }
            }

            if (nextNode == nullptr)
            {
                cout << "Invalid location. Please try again.\n";
            }
            else
            {
                nodePointer = nextNode->GetId();
                turnsRemaining--;

                if (nodePointer == 17) 
                {
                    cout << "You ventured into the Volcano...\n";
                    cout << "The ground shakes violently, and molten lava engulfs you. You have perished!\n";
                    cout << "Game over.\n";
                    break;
                }

                if (nodePointer == 19)
                {
                    bool hasGoldenKey = false;
                    for (const auto& item : inventory)
                    {
                        if (item.GetName() == "Golden Key")
                        {
                            hasGoldenKey = true;
                            break;
                        }
                    }

                    if (hasGoldenKey)
                    {
                        cout << "Congratulations! You have reached the Treasure Room with the Golden Key!\n";
                        cout << "You unlock the room and claim the treasure. You win!\n";
                        break;
                    }
                    else
                    {
                        cout << "You have reached the Treasure Room, but you don't have the Golden Key.\n";
                    }
                }
            }
        }
        else if (choice == 2 && !currentNode.GetAssets().empty())
        {
            Asset pickedAsset = currentNode.GetAssets().front();
            inventory.push_back(pickedAsset);
            currentNode.GetAssets().erase(currentNode.GetAssets().begin());
            cout << "You picked up \"" << pickedAsset.GetName() << "\"!\n";
            turnsRemaining--;
        }
        else if (choice == 3)
        {
            if (inventory.empty())
            {
                cout << "Your inventory is empty.\n";
            }
            else
            {
                cout << "Your inventory:\n";
                for (size_t i = 0; i < inventory.size(); ++i)
                {
                    cout << i + 1 << ": " << inventory[i].GetName() << "\n";
                }

                cout << "Select an item to inspect (or type 0 to cancel): ";
                int inspectChoice;
                cin >> inspectChoice;

                if (inspectChoice > 0 && inspectChoice <= static_cast<int>(inventory.size()))
                {
                    const Asset& selectedItem = inventory[inspectChoice - 1];
                    cout << "\nItem: " << selectedItem.GetName() << "\n";
                    cout << "Description: " << selectedItem.GetMessage() << "\n";
                }
                else if (inspectChoice == 0)
                {
                    cout << "Cancelled inspection.\n";
                }
                else
                {
                    cout << "Invalid choice.\n";
                }
            }
        }
        else
        {
            cout << "Invalid action. Please try again.\n";
        }
    }

    if (turnsRemaining <= 0)
    {
        cout << "You have run out of turns! Game over.\n";
    }

    for (Node* node : gameMap)
    {
        delete node;
    }

    return 0;
}
