//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Sat Mar  9 10:19:31 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file ../../../protoDuneExampleAnalysis/v0r0/cmt/np04_raw_run005250_0014_dl9_reco_13061912_0_20181110T220718.root
//////////////////////////////////////////////////////////


#ifndef fhicl__ParameterSetID_h
#define fhicl__ParameterSetID_h
namespace fhicl {
class ParameterSetID;
} // end of namespace.

#include "Rtypes.h"

namespace fhicl {
class ParameterSetID {

public:
// Nested classes declaration.

public:
// Data Members.
   bool        valid_;      //
   unsigned char id_[20];     //

   ParameterSetID();
   ParameterSetID(const ParameterSetID & );
   virtual ~ParameterSetID();

   ClassDef(ParameterSetID,12); // Generated by MakeProject.
};
} // namespace
#endif
