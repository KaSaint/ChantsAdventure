#include "Asset.hpp"

namespace chants
{
    Asset::Asset(string name, string message, int value, bool isOffensive)
    {
        _name = name;
        _message = message;
        _value = value;
        _isOffensive = isOffensive;
        hasBeenUsed = false;
    }

    string Asset::GetName() const
    {
        return _name;
    }

    string Asset::GetMessage() const
    {
        return _message;
    }

    string Asset::GetDescription() const // New method implementation
    {
        return _message;
    }

    int Asset::GetValue() const
    {
        return _value;
    }

    bool Asset::isOffensive() const
    {
        return _isOffensive;
    }
}
