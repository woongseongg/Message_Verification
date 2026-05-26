#ifndef MESSAGESPEC_H
#define MESSAGESPEC_H

/* 사용자 헤더 파일 */
#include "FieldSpec.h"

/* Library */
#include <string>
#include <vector>

namespace MsgSpecification
{
struct MessageSpec {
    std::string msgName_;
    std::uint32_t totalSize_;
    std::vector<FieldSpec> fields_;
};

MessageSpec CreateMessage(
    const std::string& msgName,
    std::uint32_t totalSize,
    std::vector<FieldSpec> fields
);
} // namespace MsgSpecification

#endif // MESSAGESPEC_H