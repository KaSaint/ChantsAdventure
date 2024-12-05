# Set up the executable
add_executable(ChantsAdventure game.cpp)

# Link the GameMap library to the executable
target_link_libraries(ChantsAdventure PRIVATE GameMap)

# Include the 'inc' directory for the ChantsAdventure target
target_include_directories(ChantsAdventure PRIVATE "${PROJECT_SOURCE_DIR}/inc")
