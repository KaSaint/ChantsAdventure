#include <gtest/gtest.h>
#include "Node.hpp"
#include "Asset.hpp"

using namespace chants;

/**
 * @brief Test the basic initialization of a Node.
 */
TEST(NodeTests, NodeInitialization)
{
    Node node(1, "Home");
    EXPECT_EQ(node.GetId(), 1);
    EXPECT_EQ(node.GetName(), "Home");
}

/**
 * @brief Test adding connections between Nodes.
 */
TEST(NodeTests, AddConnection)
{
    Node node1(1, "Home");
    Node node2(2, "Mountain");

    node1.AddConnection(&node2);

    ASSERT_EQ(node1.GetConnections().size(), 1);
    EXPECT_EQ(node1.GetConnections()[0]->GetName(), "Mountain");
}

/**
 * @brief Test adding assets to a Node.
 */
TEST(NodeTests, AddAsset)
{
    Node node(1, "Home");
    Asset asset("Golden Key", "A key to unlock the Treasure Room.", 50, false);

    node.AddAsset(&asset);

    ASSERT_EQ(node.GetAssets().size(), 1);

}

/**
 * @brief Test retrieving an asset from a Node.
 */
TEST(NodeTests, GetAssets)
{
    Node node(1, "Home");
    Asset asset("Magic Ring", "Glows faintly in the dark.", 30, false);

    node.AddAsset(asset);

    auto assets = node.GetAssets();

    ASSERT_EQ(assets.size(), 1);
    EXPECT_EQ(assets[0]->GetDescription(), "Glows faintly in the dark.");
}
