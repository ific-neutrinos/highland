//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 13 18:08:35 2020 by ROOT version 6.16/00)
//      from the StreamerInfo in file ../np04_raw_run005834_0126_dl7_reco_22481932_0_20190828T190321.root
//////////////////////////////////////////////////////////


#ifndef util__flags__BitMask_unsigned_int__h
#define util__flags__BitMask_unsigned_int__h
namespace util {
namespace flags {
template <typename T0> class BitMask;
template <> class BitMask<unsigned int>;
} // end of namespace.
} // end of namespace.

#include "Rtypes.h"
#include "util__flags__Bits_t_unsigned_int_.h"

namespace util {
namespace flags {
template <typename T0> class BitMask;
template <> class BitMask<unsigned int> {

public:
// Nested classes declaration.

public:
// Data Members.
   util::flags::Bits_t<unsigned int> values;      //Storage of value bits.
   util::flags::Bits_t<unsigned int> presence;    //Storage of definition bits.

   BitMask();
   BitMask(const BitMask & );
   virtual ~BitMask();

};
} // namespace
} // namespace
#endif
