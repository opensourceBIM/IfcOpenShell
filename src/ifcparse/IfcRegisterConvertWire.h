#include "IfcRegisterUndef.h"
#define WIRE(T) \
	if ( l->is(T::Class()) ) return convert(reinterpret_pointer_cast<IfcBaseClass,T>(l),r);
#include "IfcRegisterDef.h"

#include "IfcRegister.h"