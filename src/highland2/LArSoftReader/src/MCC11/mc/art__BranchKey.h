//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 14 10:40:59 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file /hep/DUNE/DataDir/MCC11/mcc11_protoDUNE_sp_reco_12231045_0_1ee4e6cf-25fb-482c-a231-fbd91e816aa4.root
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