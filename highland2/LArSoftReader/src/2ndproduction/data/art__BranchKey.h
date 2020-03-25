//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 13 18:08:35 2020 by ROOT version 6.16/00)
//      from the StreamerInfo in file ../np04_raw_run005834_0126_dl7_reco_22481932_0_20190828T190321.root
//////////////////////////////////////////////////////////


#ifndef art__BranchKey_h
#define art__BranchKey_h
namespace art {
class BranchKey;
} // end of namespace.

#include "Rtypes.h"
#include "Riostream.h"
#include <string>

namespace art {
class BranchKey {

public:
// Nested classes declaration.

public:
// Data Members.
   string      friendlyClassName_;    //
   string      moduleLabel_;          //
   string      productInstanceName_;    //
   string      processName_;            //
   int         branchType_;             //

   BranchKey();
   BranchKey(const BranchKey & );
   virtual ~BranchKey();

   ClassDef(BranchKey,12); // Generated by MakeProject.
};
} // namespace
#endif
