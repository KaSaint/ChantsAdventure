# Chants Adventure Game
- **By Kyle St. Clair
- **CSCI-207-01
# How To Run The Project
- Ensure that your current directory is the project folder.
- Run the following commands in your terminal:
- 1. cmake -S . -B build
- 2. cmake --build build
- 3. ./build/app/chants_adventure
- (Omit the quotation marks)
## Project Overview
This project implements a text-based adventure game in C++. Players navigate a 20-node map, collect items, and aim to reach the Treasure Room with the Golden Key to win. The game integrates a simple inventory system, item inspection, and path exploration to create an engaging gameplay experience.
## Features

### Game Map
- A 20-node game map with unique descriptions and connections.
- Logical paths allow exploration toward the goal.

### Item Management
- Items like the Golden Key and other optional collectibles can be found and added to the player’s inventory.
- Players can inspect items to view detailed descriptions.

### Gameplay Loop
- Players choose paths to travel between locations.
- Action options include moving, picking up items, and inspecting inventory.
- The game ends when players reach the Treasure Room with the Golden Key or lose by running out of turns or entering dangerous locations like the Volcano.
### Code Implementation
- Node: Represents individual locations on the map. Stores connections, descriptions, and items.
- Asset: Represents collectible items that players can pick up and inspect.
- game.cpp: Coordinates the gameplay loop, handles player actions, and implements game rules.
## References
- Game Design Inspiration: Any boardgame ever
- Coding Resources: C++ documentation and forums provided best practices for implementing classes and managing vectors.
## Challenges
### Path Connections:
- Ensuring every node had at least two connections required careful mapping and testing. Some nodes initially became inaccessible due to logical oversights.
### Memory Management:
- Proper cleanup of dynamically allocated objects like nodes and assets was crucial to avoid memory leaks.
### Inspect Functionality:
- Debugging the inventory inspection feature to ensure item descriptions displayed correctly without disrupting the gameplay flow.
## Future Improvements
- Add interactive features like battling monsters or dropping items.
- Enhance map design with additional branching paths and hidden areas.
- Improve the user interface with clearer feedback for player actions and a mini-map.
- Add save and load functionality to allow players to continue their progress.