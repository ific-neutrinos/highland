//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 13 18:08:35 2020 by ROOT version 6.16/00)
//      from the StreamerInfo in file ../np04_raw_run005834_0126_dl7_reco_22481932_0_20190828T190321.root
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