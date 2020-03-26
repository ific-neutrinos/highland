//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun  4 02:53:16 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file /pnfs/dune/scratch/users/tjyang/v08_21_00/reco/mcc12_protodune_beam_p1GeV_cosmics_12ms_test/19285494_84/mcc12_protodune_beam_p1GeV_cosmics_12ms_test_84_20190601T145951_reco0.root
//////////////////////////////////////////////////////////


#ifndef recob__Slice_h
#define recob__Slice_h
namespace recob {
class Slice;
} // end of namespace.

#include "Rtypes.h"
#include "Math/GenVector/PositionVector3D.h"
#include "Math/GenVector/Cartesian3D.h"
#include "Math/GenVector/CoordinateSystemTags.h"
#include "Math/GenVector/DisplacementVector3D.h"

namespace recob {
class Slice {

public:
// Nested classes declaration.

public:
// Data Members.
   int         fID;         //id for this slice
   ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag> fCenter;     //Center of the slice for flash matching
   ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag> fDirection;    //direction from a linear fit
   ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>     fEnd0Pos;      //Position of a SpacePoint at one end of the slice
   ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<Double32_t>,ROOT::Math::GlobalCoordinateSystemTag>     fEnd1Pos;      //Position of the other end
   float                                                                                                       fAspectRatio;    //absolute value of the linear correlation coefficient (0 = round blob, 1 = line)
   float                                                                                                       fCharge;         //

   Slice();
   Slice(const Slice & );
   virtual ~Slice();

   ClassDef(Slice,16); // Generated by MakeProject.
};
} // namespace
#endif