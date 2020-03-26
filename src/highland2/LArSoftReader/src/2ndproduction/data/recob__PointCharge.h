//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 13 18:08:35 2020 by ROOT version 6.16/00)
//      from the StreamerInfo in file ../np04_raw_run005834_0126_dl7_reco_22481932_0_20190828T190321.root
//////////////////////////////////////////////////////////


#ifndef recob__PointCharge_h
#define recob__PointCharge_h
namespace recob {
class PointCharge;
} // end of namespace.

#include "Rtypes.h"

namespace recob {
class PointCharge {

public:
// Nested classes declaration.

public:
// Data Members.
   float       fCharge;     //Reconstructed charge.

   PointCharge();
   PointCharge(const PointCharge & );
   virtual ~PointCharge();

   ClassDef(PointCharge,11); // Generated by MakeProject.
};
} // namespace
#endif