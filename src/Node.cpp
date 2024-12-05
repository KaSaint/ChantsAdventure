#include "Node.hpp"

namespace chants
{
    Node::Node(int id, const std::string& name) : _id(id), _name(name) {}

    int Node::GetId() const { return _id; }
    void Node::SetId(int id) { _id = id; }
    const std::string& Node::GetName() const { return _name; }

    void Node::AddConnection(Node *conn)
    {
        _connections.push_back(conn);
    }

    const std::vector<Node *>& Node::GetConnections() const
    {
        return _connections;
    }

    void Node::AddAsset(const Asset& asset)
    {
        _assets.push_back(asset);
    }

    std::vector<Asset>& Node::GetAssets()
    {
        return _assets;
    }

    void Node::AddMonster(Monster *monster)
    {
        _monsters.push_back(monster);
    }

    const std::vector<Monster *>& Node::GetMonsters() const
    {
        return _monsters;
    }

    bool Node::operator==(const Node &rhs) const
    {
        return _name == rhs._name;
    }
}
