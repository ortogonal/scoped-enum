#include "file.h"

namespace play {

File::File(const std::string &name, const Permission &permissions)
    : m_name(name), m_permissions(permissions)
{}

std::string File::name() const
{
    return m_name;
}

bool File::isReadable() const
{
    return (m_permissions & Permission::Read) == Permission::Read;
}

bool File::isWriteable() const
{
    return (m_permissions & Permission::Write) == Permission::Write;
}

bool File::isExecutable() const
{
    return (m_permissions & Permission::Execute) == Permission::Execute;
}

void File::setReadable(const bool &readable)
{
    setPermisson(Permission::Read, readable);
}

void File::setWriteable(const bool &writeable)
{
    setPermisson(Permission::Write, writeable);
}

void File::setExecutable(const bool &executable)
{
    setPermisson(Permission::Execute, executable);
}

void File::setPermisson(const Permission &permission, const bool &value)
{
    if (value) {
        m_permissions = m_permissions | permission;
    } else {
        m_permissions = m_permissions ^ permission;
    }
}

inline File::Permission operator&(const File::Permission &lhs, const File::Permission &rhs)
{
    return static_cast<File::Permission>(std::underlying_type<File::Permission>::type(lhs)
                                         & std::underlying_type<File::Permission>::type(rhs));
}

inline File::Permission operator|(const File::Permission &lhs, const File::Permission &rhs)
{
    return static_cast<File::Permission>(std::underlying_type<File::Permission>::type(lhs)
                                         | std::underlying_type<File::Permission>::type(rhs));
}

inline File::Permission operator^(const File::Permission &lhs, const File::Permission &rhs)
{
    return static_cast<File::Permission>(std::underlying_type<File::Permission>::type(lhs)
                                         ^ std::underlying_type<File::Permission>::type(rhs));
}

} // namespace play
