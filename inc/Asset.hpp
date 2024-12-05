#pragma once

#include <string>

using namespace std;

namespace chants
{
    class Asset
    {
    private:
        string _name;
        string _message; // Stores the description of the asset
        int _value;
        bool _isOffensive;

    public:
        bool hasBeenUsed;

        // Constructor
        Asset(string name, string message, int value, bool isOffensive);

        // Accessor methods
        string GetName() const;
        string GetMessage() const;
        string GetDescription() const; // New method
        int GetValue() const;
        bool isOffensive() const;
    };
}
