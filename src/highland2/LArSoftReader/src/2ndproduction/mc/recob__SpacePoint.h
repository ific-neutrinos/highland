//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 13 18:14:53 2020 by ROOT version 6.16/00)
//      from the StreamerInfo in file ../PDSPProd2_protoDUNE_sp_reco_35ms_sce_off_23473772_0_452d9f89-a2a1-4680-ab72-853a3261da5d.root
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