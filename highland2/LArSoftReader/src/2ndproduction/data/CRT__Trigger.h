//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 13 18:08:35 2020 by ROOT version 6.16/00)
//      from the StreamerInfo in file ../np04_raw_run005834_0126_dl7_reco_22481932_0_20190828T190321.root
//////////////////////////////////////////////////////////


#ifndef CRT__Trigger_h
#define CRT__Trigger_h
namespace CRT {
class Trigger;
} // end of namespace.

#include "Rtypes.h"
#include "Riostream.h"
#include <vector>
#include "CRT__Hit.h"

namespace CRT {
class Trigger {

public:
// Nested classes declaration.

public:
// Data Members.
   unsigned short fChannel;    //Mapping to CRT module that was Triggered.  Index into the Geometry service's array of AuxDetGeos
   ULong64_t      fTimestamp;    //Timestamp when this Trigger occurred.  First 32 bits are Linux time since epoch; last 32 bits are time in
   vector<CRT::Hit> fHits;         //All activity in CRT strips within this module when it was read out

   Trigger();
   Trigger(const Trigger & );
   virtual ~Trigger();

   ClassDef(Trigger,11); // Generated by MakeProject.
};
} // namespace
#endif
