//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Sat Mar  9 10:19:31 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file ../../../protoDuneExampleAnalysis/v0r0/cmt/np04_raw_run005250_0014_dl9_reco_13061912_0_20181110T220718.root
//////////////////////////////////////////////////////////


#ifndef art__HLTPathStatus_h
#define art__HLTPathStatus_h
namespace art {
class HLTPathStatus;
} // end of namespace.

#include "Rtypes.h"

namespace art {
class HLTPathStatus {

public:
// Nested classes declaration.

public:
// Data Members.
   unsigned short status_;     //

   HLTPathStatus();
   HLTPathStatus(const HLTPathStatus & );
   virtual ~HLTPathStatus();

   ClassDef(HLTPathStatus,11); // Generated by MakeProject.
};
} // namespace
#endif