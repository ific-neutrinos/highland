//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Mon Jun  3 14:12:50 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file /hep/DUNE/DataDir/ana_-043d807f-0b76-401e-9889-c1184b96a71c.root
//////////////////////////////////////////////////////////


#ifndef raw__ctb__pdspctb_h
#define raw__ctb__pdspctb_h
namespace raw {
namespace ctb {
class pdspctb;
} // end of namespace.
} // end of namespace.

#include "Rtypes.h"
#include "Riostream.h"
#include <vector>
#include "raw__ctb__Trigger.h"
#include "raw__ctb__ChStatus.h"
namespace raw {
namespace ctb {
#ifndef raw__ctb__Feedback_h
#define raw__ctb__Feedback_h
enum Feedback { kDefault_Feedback };
#endif
} // end of namespace.
} // end of namespace.
#include "raw__ctb__Misc.h"
#include "raw__ctb__WordIndex.h"

namespace raw {
namespace ctb {
class pdspctb {

public:
// Nested classes declaration.

public:
// Data Members.
   vector<raw::ctb::Trigger> fTriggers;    //
   vector<raw::ctb::ChStatus> fChStatuses;    //
   vector<raw::ctb::Feedback> fFeedbacks;     //
   vector<raw::ctb::Misc>     fMiscs;         //
   vector<raw::ctb::WordIndex> fIndexes;       //

   pdspctb();
   pdspctb(const pdspctb & );
   virtual ~pdspctb();

   ClassDef(pdspctb,12); // Generated by MakeProject.
};
} // namespace
} // namespace
#endif