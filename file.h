#pragma once

#include <string>

namespace play {

class File
{
public:
    enum class Permission { Read = 1, Write = 2, Execute = 4 };

    File(const std::string &name, const Permission &permissions);

    std::string name() const;

    bool isReadable() const;
    bool isWriteable() const;
    bool isExecutable() const;

    void setReadable(const bool &readable);
    void setWriteable(const bool &writeable);
    void setExecutable(const bool &executable);

    friend Permission operator&(const Permission &lhs, const Permission &rhs);
    friend Permission operator|(const Permission &lhs, const Permission &rhs);
    friend Permission operator^(const Permission &lhs, const Permission &rhs);

private:
    void setPermisson(const Permission &permission, const bool &value);

    std::string m_name;
    Permission m_permissions;
};

} // namespace play
