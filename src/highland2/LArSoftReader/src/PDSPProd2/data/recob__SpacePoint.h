//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 13 18:08:35 2020 by ROOT version 6.16/00)
//      from the StreamerInfo in file ../np04_raw_run005834_0126_dl7_reco_22481932_0_20190828T190321.root
//////////////////////////////////////////////////////////


#ifndef recob__SpacePoint_h
#define recob__SpacePoint_h
namespace recob {
class SpacePoint;
} // end of namespace.

#include "Rtypes.h"

namespace recob {
class SpacePoint {

public:
// Nested classes declaration.

public:
// Data Members.
   int         fID;         //SpacePoint ID
   Double32_t  fXYZ[3];     //position of SpacePoint in xyz
   Double32_t  fErrXYZ[6];    //Error matrix (triangular).
   Double32_t  fChisq;        //Chisquare.

   SpacePoint();
   SpacePoint(const SpacePoint & );
   virtual ~SpacePoint();

   ClassDef(SpacePoint,14); // Generated by MakeProject.
};
} // namespace
#endif