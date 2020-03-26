//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 14 10:40:59 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file /hep/DUNE/DataDir/MCC11/mcc11_protoDUNE_sp_reco_12231045_0_1ee4e6cf-25fb-482c-a231-fbd91e816aa4.root
//////////////////////////////////////////////////////////


#ifndef recob__EndPoint2D_h
#define recob__EndPoint2D_h
namespace recob {
class EndPoint2D;
} // end of namespace.

#include "Rtypes.h"
#include "geo__WireID.h"

namespace recob {
class EndPoint2D {

public:
// Nested classes declaration.

public:
// Data Members.
   double      fDriftTime;    //vertex's drift time
   geo::WireID fWireID;       //vertex's wireID
   int         fID;           //vertex's ID
   double      fStrength;     //vertex's strength
   Int_t       fView;         //view for this end point
   double      fTotalCharge;    //total charge of hits associated with end point

   EndPoint2D();
   EndPoint2D(const EndPoint2D & );
   virtual ~EndPoint2D();

   ClassDef(EndPoint2D,15); // Generated by MakeProject.
};
} // namespace
#endif