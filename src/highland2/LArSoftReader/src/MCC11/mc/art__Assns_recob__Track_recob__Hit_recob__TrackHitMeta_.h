//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 14 10:40:59 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file /hep/DUNE/DataDir/MCC11/mcc11_protoDUNE_sp_reco_12231045_0_1ee4e6cf-25fb-482c-a231-fbd91e816aa4.root
//////////////////////////////////////////////////////////


#ifndef art__Assns_recob__Track_recob__Hit_recob__TrackHitMeta__h
#define art__Assns_recob__Track_recob__Hit_recob__TrackHitMeta__h
namespace recob {
class Track;
} // end of namespace.
namespace recob {
class Hit;
} // end of namespace.
namespace recob {
class TrackHitMeta;
} // end of namespace.
namespace art {
template <typename T0, typename T1, typename T2> class Assns;
template <> class Assns<recob::Track,recob::Hit,recob::TrackHitMeta>;
} // end of namespace.

#include "Rtypes.h"
#include "recob__Track.h"
#include "recob__Hit.h"
#include "recob__TrackHitMeta.h"
#include "art__Assns_recob__Track_recob__Hit_void_.h"
#include "Riostream.h"
#include <vector>

namespace art {
template <typename T0, typename T1, typename T2> class Assns;
template <> class Assns<recob::Track,recob::Hit,recob::TrackHitMeta> : public art::Assns<recob::Track,recob::Hit,void> {

public:
// Nested classes declaration.

public:
// Data Members.
   vector<recob::TrackHitMeta> data_;       //

   Assns();
   Assns(const Assns & );
   virtual ~Assns();

   ClassDef(Assns,12); // Generated by MakeProject.
};
} // namespace
#endif