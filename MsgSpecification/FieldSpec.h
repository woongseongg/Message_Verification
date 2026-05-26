#ifndef FIELDSPEC_H
#define FIELDSPEC_H

/* Library */
#include <string>
#include <optional>

namespace MsgSpecification
{
enum class FieldType {
    UInt8,
    UInt16,
    UInt32,
    Int8,
    Int16,
    Int32,
    Byte
};

enum class Endian {
    Little,
    Big
};

struct FieldSpec {
    std::string fieldName_;
    std::uint32_t offset_;
    std::uint32_t fieldSize_;

    FieldType fieldType_;
    Endian endian_;

    std::optional<std::int32_t> minValue_;
    std::optional<std::int32_t> maxValue_;
};

FieldSpec CreateField(
    const std::string& fieldName, 
    const std::uint32_t& offset, 
    const::uint32_t fieldSize, 
    FieldType fieldType, 
    Endian endian, 
    std::optional<std::uint32_t> minValue, 
    std::optional<std::uint32_t> maxValue
);
} // namespace MsgSpecifiaction

#endif  // FIELDSPEC_H