//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Mon Jun  3 14:12:50 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file /hep/DUNE/DataDir/ana_-043d807f-0b76-401e-9889-c1184b96a71c.root
//////////////////////////////////////////////////////////


#ifndef recob__TrajectoryPointFlags_h
#define recob__TrajectoryPointFlags_h
namespace recob {
class TrajectoryPointFlags;
} // end of namespace.

#include "Rtypes.h"
#include "util__flags__FlagSet_32_unsigned_int_.h"

namespace recob {
class TrajectoryPointFlags {

public:
// Nested classes declaration.

public:
// Data Members.
   unsigned int fFromHit;    //Index of the original hit.
   util::flags::FlagSet<32,unsigned int> fFlags;      //Set of flags

   TrajectoryPointFlags();
   TrajectoryPointFlags(const TrajectoryPointFlags & );
   virtual ~TrajectoryPointFlags();

};
} // namespace
#endif