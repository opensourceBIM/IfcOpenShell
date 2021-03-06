/********************************************************************************
 *                                                                              *
 * This file is part of IfcOpenShell.                                           *
 *                                                                              *
 * IfcOpenShell is free software: you can redistribute it and/or modify         *
 * it under the terms of the Lesser GNU General Public License as published by  *
 * the Free Software Foundation, either version 3.0 of the License, or          *
 * (at your option) any later version.                                          *
 *                                                                              *
 * IfcOpenShell is distributed in the hope that it will be useful,              *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of               *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                 *
 * Lesser GNU General Public License for more details.                          *
 *                                                                              *
 * You should have received a copy of the Lesser GNU General Public License     *
 * along with this program. If not, see <http://www.gnu.org/licenses/>.         *
 *                                                                              *
 ********************************************************************************/

/********************************************************************************
 *                                                                              *
 * This file has been generated from IFC2X3_TC1.exp. Do not make modifications  *
 * but instead modify the python script that has been used to generate this.    *
 *                                                                              *
 ********************************************************************************/
 
#ifndef IFC2X3RT_H
#define IFC2X3RT_H

#include "../ifcparse/ArgumentType.h"

namespace Ifc2x3 {
namespace Type {
    int GetAttributeCount(Enum t);
    int GetAttributeIndex(Enum t, const std::string& a);
    IfcUtil::ArgumentType GetAttributeType(Enum t, unsigned char a);
    const std::string& GetAttributeName(Enum t, unsigned char a);
    bool GetAttributeOptional(Enum t, unsigned char a);
    std::pair<const char*, int> GetEnumerationIndex(Enum t, const std::string& a);
    Enum GetAttributeEnumerationClass(Enum t, unsigned char a);
}}

#endif

