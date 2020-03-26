//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 14 10:40:59 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file /hep/DUNE/DataDir/MCC11/mcc11_protoDUNE_sp_reco_12231045_0_1ee4e6cf-25fb-482c-a231-fbd91e816aa4.root
//////////////////////////////////////////////////////////


#ifndef anab__ParticleID_h
#define anab__ParticleID_h
namespace anab {
class ParticleID;
} // end of namespace.

#include "Rtypes.h"
#include "geo__PlaneID.h"

namespace anab {
class ParticleID {

public:
// Nested classes declaration.

public:
// Data Members.
   int         fPdg;        //determined particle ID
   int         fNdf;        //ndf for chi2 test
   double      fMinChi2;    //Minimum reduced chi2
   double      fDeltaChi2;    //difference between two lowest reduced chi2's
   double      fChi2Proton;    //reduced chi2 using proton template
   double      fChi2Kaon;      //reduced chi2 using kaon template
   double      fChi2Pion;      //reduced chi2 using pion template
   double      fChi2Muon;      //reduced chi2 using muon template
   double      fMissingE;      //missing energy from dead wires for contained particle
   double      fMissingEavg;    //missing energy from dead wires using average dEdx
   double      fPIDA;           //PID developed by Bruce Baller
   geo::PlaneID fPlaneID;        //

   ParticleID();
   ParticleID(const ParticleID & );
   virtual ~ParticleID();

   ClassDef(ParticleID,14); // Generated by MakeProject.
};
} // namespace
#endif