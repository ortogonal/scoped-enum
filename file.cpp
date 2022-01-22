#include "file.h"

namespace play {

File::File(const std::string &name, const Permission &permissions)
    : m_name(name), m_permissions(permissions)
{}

std::string File::name() const
{
    return m_name;
}

File::Permission operator|(const File::Permission &lhs, const File::Permission &rhs)
{
    return static_cast<File::Permission>(std::underlying_type<File::Permission>::type(lhs)
                                         | std::underlying_type<File::Permission>::type(rhs));
}

} // namespace play
