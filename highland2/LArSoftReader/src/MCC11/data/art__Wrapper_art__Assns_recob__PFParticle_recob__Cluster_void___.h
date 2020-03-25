//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Sat Mar  9 10:19:31 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file ../../../protoDuneExampleAnalysis/v0r0/cmt/np04_raw_run005250_0014_dl9_reco_13061912_0_20181110T220718.root
//////////////////////////////////////////////////////////


#ifndef art__Wrapper_art__Assns_recob__PFParticle_recob__Cluster_void____h
#define art__Wrapper_art__Assns_recob__PFParticle_recob__Cluster_void____h
namespace recob {
class PFParticle;
} // end of namespace.
namespace recob {
class Cluster;
} // end of namespace.
namespace art {
template <typename T0, typename T1, typename T2> class Assns;
template <> class Assns<recob::PFParticle,recob::Cluster,void>;
} // end of namespace.
namespace art {
template <typename T0> class Wrapper;
template <> class Wrapper<art::Assns<recob::PFParticle,recob::Cluster,void> >;
} // end of namespace.

#include "Rtypes.h"
#include "art__Assns_recob__PFParticle_recob__Cluster_void_.h"
#include "art__EDProduct.h"
#include "recob__PFParticle.h"
#include "recob__Cluster.h"

namespace art {
template <typename T0> class Wrapper;
template <> class Wrapper<art::Assns<recob::PFParticle,recob::Cluster,void> > : public art::EDProduct {

public:
// Nested classes declaration.

public:
// Data Members.
   bool        present;     //
   unsigned int rangeSetID;    //
   art::Assns<recob::PFParticle,recob::Cluster,void> obj;           //

   Wrapper();
   Wrapper(const Wrapper & );
   virtual ~Wrapper();

   ClassDef(Wrapper,12); // Generated by MakeProject.
};
} // namespace
#endif
