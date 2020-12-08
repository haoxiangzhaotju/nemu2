#include "prefix/prefix.h"

#include "data-mov/mov.h"
#include "data-mov/xchg.h"
#include "data-mov/movext.h"
#include "data-mov/cltd.h"
#include "data-mov/leave.h"
#include "data-mov/movzx.h"
#include "data-mov/lgdt.h"

#include "arith/dec.h"
#include "arith/inc.h"
#include "arith/neg.h"
#include "arith/imul.h"
#include "arith/mul.h"
#include "arith/idiv.h"
#include "arith/div.h"
#include "arith/call.h"
#include "arith/push.h"
#include "arith/test.h"
#include "arith/cmp.h"
#include "arith/pop.h"
#include "arith/ret.h"
#include "arith/sub.h"
#include "arith/jmp.h"
#include "arith/add.h"
#include "arith/sbb.h"
#include "arith/adc.h"
#include "arith/jcc.h"
#include "arith/int.h"

#include "logic/and.h"
#include "logic/or.h"
#include "logic/not.h"
#include "logic/xor.h"
#include "logic/sar.h"
#include "logic/shl.h"
#include "logic/shr.h"
#include "logic/shrd.h"
#include "logic/setcc.h"

#include "string/rep.h"
#include "string/movs.h"
#include "string/stos.h"
#include "string/scas.h"
#include "string/lods.h"

#include "misc/misc.h"

#include "special/special.h"

//#include "call/call.h"
