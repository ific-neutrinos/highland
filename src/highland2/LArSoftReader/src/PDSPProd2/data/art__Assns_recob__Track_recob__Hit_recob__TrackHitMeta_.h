//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 13 18:08:35 2020 by ROOT version 6.16/00)
//      from the StreamerInfo in file ../np04_raw_run005834_0126_dl7_reco_22481932_0_20190828T190321.root
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