//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 13 18:08:35 2020 by ROOT version 6.16/00)
//      from the StreamerInfo in file ../np04_raw_run005834_0126_dl7_reco_22481932_0_20190828T190321.root
//////////////////////////////////////////////////////////


#ifndef art__Assns_recob__OpFlash_recob__OpHit_void__h
#define art__Assns_recob__OpFlash_recob__OpHit_void__h
namespace recob {
class OpFlash;
} // end of namespace.
namespace recob {
class OpHit;
} // end of namespace.
namespace art {
template <typename T0, typename T1, typename T2> class Assns;
template <> class Assns<recob::OpFlash,recob::OpHit,void>;
} // end of namespace.

#include "Rtypes.h"
#include "recob__OpFlash.h"
#include "recob__OpHit.h"
#include "art__detail__AssnsBase.h"
#include "Riostream.h"
#include <vector>
#include <utility>
#include "art__RefCore.h"

namespace art {
template <typename T0, typename T1, typename T2> class Assns;
template <> class Assns<recob::OpFlash,recob::OpHit,void> : public art::detail::AssnsBase {

public:
// Nested classes declaration.

public:
// Data Members.
   vector<pair<art::RefCore,unsigned long> > ptr_data_1_;    //
   vector<pair<art::RefCore,unsigned long> > ptr_data_2_;    //

   Assns();
   Assns(const Assns & );
   virtual ~Assns();

   ClassDef(Assns,12); // Generated by MakeProject.
};
} // namespace
#ifdef __MAKECINT__
#pragma link C++ class pair<art::RefCore,unsigned long>+;
#endif
#endif
