#pragma once

#include <vector>
#include <string>
#include "Asset.hpp"
#include "Monster.hpp"

namespace chants
{

    class Node
    {
    private:
        int _id;
        std::string _name;
        std::vector<Node *> _connections;
        std::vector<Asset> _assets;         // Store Asset objects directly
        std::vector<Monster *> _monsters;  // Still pointers for Monsters

    public:
        std::string Description;

        Node(int id, const std::string& name);
        int GetId() const;
        void SetId(int id);
        const std::string& GetName() const;
        void AddConnection(Node *conn);
        const std::vector<Node *>& GetConnections() const;

        void AddAsset(const Asset& asset); // Add by value/reference
        std::vector<Asset>& GetAssets();   // Return modifiable vector

        void AddMonster(Monster *monster);
        const std::vector<Monster *>& GetMonsters() const;

        bool operator==(const Node &rhs) const;
    };
}
