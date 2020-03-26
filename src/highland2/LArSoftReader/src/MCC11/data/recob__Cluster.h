//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Sat Mar  9 10:19:31 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file ../../../protoDuneExampleAnalysis/v0r0/cmt/np04_raw_run005250_0014_dl9_reco_13061912_0_20181110T220718.root
//////////////////////////////////////////////////////////


#ifndef recob__Cluster_h
#define recob__Cluster_h
namespace recob {
class Cluster;
} // end of namespace.

#include "Rtypes.h"
#include "geo__PlaneID.h"

namespace recob {
class Cluster {

public:
// Nested classes declaration.

public:
// Data Members.
   unsigned int fNHits;      //Number of hits in the cluster
   float        fEndWires[2];    //
   float        fSigmaEndWires[2];    //
   float        fEndTicks[2];         //
   float        fSigmaEndTicks[2];    //
   float        fEndCharges[2];       //
   float        fAngles[2];           //
   float        fOpeningAngles[2];    //
   float        fChargeSum[2];        //
   float        fChargeStdDev[2];     //
   float        fChargeAverage[2];    //
   float        fMultipleHitDensity;    //
   float        fWidth;                 //
   int          fID;                    //
   Int_t        fView;                  //View for this cluster
   geo::PlaneID fPlaneID;               //Location of the start of the cluster

   Cluster();
   Cluster(const Cluster & );
   virtual ~Cluster();

   ClassDef(Cluster,17); // Generated by MakeProject.
};
} // namespace
#endif