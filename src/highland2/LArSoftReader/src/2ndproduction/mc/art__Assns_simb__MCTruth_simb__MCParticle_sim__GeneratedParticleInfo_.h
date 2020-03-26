//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 13 18:14:53 2020 by ROOT version 6.16/00)
//      from the StreamerInfo in file ../PDSPProd2_protoDUNE_sp_reco_35ms_sce_off_23473772_0_452d9f89-a2a1-4680-ab72-853a3261da5d.root
//////////////////////////////////////////////////////////


#ifndef art__Assns_simb__MCTruth_simb__MCParticle_sim__GeneratedParticleInfo__h
#define art__Assns_simb__MCTruth_simb__MCParticle_sim__GeneratedParticleInfo__h
namespace simb {
class MCTruth;
} // end of namespace.
namespace simb {
class MCParticle;
} // end of namespace.
namespace sim {
class GeneratedParticleInfo;
} // end of namespace.
namespace art {
template <typename T0, typename T1, typename T2> class Assns;
template <> class Assns<simb::MCTruth,simb::MCParticle,sim::GeneratedParticleInfo>;
} // end of namespace.

#include "Rtypes.h"
#include "simb__MCTruth.h"
#include "simb__MCParticle.h"
#include "sim__GeneratedParticleInfo.h"
#include "art__Assns_simb__MCTruth_simb__MCParticle_void_.h"
#include "Riostream.h"
#include <vector>

namespace art {
template <typename T0, typename T1, typename T2> class Assns;
template <> class Assns<simb::MCTruth,simb::MCParticle,sim::GeneratedParticleInfo> : public art::Assns<simb::MCTruth,simb::MCParticle,void> {

public:
// Nested classes declaration.

public:
// Data Members.
   vector<sim::GeneratedParticleInfo> data_;       //

   Assns();
   Assns(const Assns & );
   virtual ~Assns();

   ClassDef(Assns,12); // Generated by MakeProject.
};
} // namespace
#endif