//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 14 10:40:59 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file /hep/DUNE/DataDir/MCC11/mcc11_protoDUNE_sp_reco_12231045_0_1ee4e6cf-25fb-482c-a231-fbd91e816aa4.root
//////////////////////////////////////////////////////////


#ifndef art__RunID_h
#define art__RunID_h
namespace art {
class RunID;
} // end of namespace.

#include "Rtypes.h"

namespace art {
class RunID {

public:
// Nested classes declaration.

public:
// Data Members.
   unsigned int run_;        //

   RunID();
   RunID(const RunID & );
   virtual ~RunID();

   ClassDef(RunID,11); // Generated by MakeProject.
};
} // namespace
#endif