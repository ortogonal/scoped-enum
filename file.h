#pragma once

#include <string>

namespace play {

class File
{
public:
    enum class Permission { Read = 1, Write = 2, Execute = 4 };

    File(const std::string &name, const Permission &permissions);

    std::string name() const;

private:
    std::string m_name;
    Permission m_permissions;
};

} // namespace play
