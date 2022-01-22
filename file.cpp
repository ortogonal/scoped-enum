#include "file.h"

namespace play {

File::File(const std::string &name, const Permission &permissions)
    : m_name(name), m_permissions(permissions)
{}

std::string File::name() const
{
    return m_name;
}

} // namespace play
