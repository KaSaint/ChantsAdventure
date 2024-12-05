#include <Player.hpp>

namespace chants
{

    /**
     * @brief Constructs a Player object with the given name, health, and fight coefficient.
     * 
     * @param name The name of the player.
     * @param health The initial health value of the player.
     * @param fightCoefficient The player's fighting strength.
     */
    Player::Player(string name, int health, int fightCoefficient) : Combatant(name, health, fightCoefficient)
    {
    }

    /**
     * @brief Adds an asset to the player's inventory.
     * 
     * @param asset The asset to add to the player's inventory.
     */
    void Player::AddAsset(Asset asset)
    {
        _assets.push_back(asset);
    }

    /**
     * @brief Calculates the total value of all assets in the player's inventory.
     * 
     * @return The sum of the values of all assets the player holds.
     */
    int Player::GetTotalAssetValue()
    {
        int val = 0;
        for (Asset asset : _assets)
        {
            val += asset.GetValue();
        }
        return val;
    }
}
