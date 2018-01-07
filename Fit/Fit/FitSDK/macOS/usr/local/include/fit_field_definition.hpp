////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Dynastream Innovations Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2017 Dynastream Innovations Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 20.54Release
// Tag = production/akw/20.54.00-0-ga49a69a
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_FIELD_DEFINITION_HPP)
#define FIT_FIELD_DEFINITION_HPP

#include <iosfwd>
#include "fit.hpp"
#include "fit_field.hpp"

namespace fit
{

class FieldDefinition
{
public:
    FieldDefinition();
    FieldDefinition(const Field& field);
    FieldDefinition(const Field* field);
    FIT_UINT8 GetNum() const;
    FIT_UINT8 GetSize() const;
    FIT_UINT8 GetType() const;
    void SetNum(const FIT_UINT8 newNum);
    void SetSize(const FIT_UINT8 newSize);
    void SetType(const FIT_UINT8 newType);
    FIT_BOOL operator==(const FieldDefinition& field) const;
    FIT_BOOL operator!=(const FieldDefinition& field) const;
    FIT_UINT8 Write(std::ostream &file) const;

private:
    FIT_UINT8 num;
    FIT_UINT8 size;
    FIT_UINT8 type;
};

} // namespace fit

#endif // defined(FIT_FIELD_DEFINITION_HPP)
