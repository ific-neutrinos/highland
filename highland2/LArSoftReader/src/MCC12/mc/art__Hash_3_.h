//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun  4 02:53:16 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file /pnfs/dune/scratch/users/tjyang/v08_21_00/reco/mcc12_protodune_beam_p1GeV_cosmics_12ms_test/19285494_84/mcc12_protodune_beam_p1GeV_cosmics_12ms_test_84_20190601T145951_reco0.root
//////////////////////////////////////////////////////////


#ifndef art__Hash_3__h
#define art__Hash_3__h
namespace art {
template <int T0> class Hash;
template <> class Hash<3>;
} // end of namespace.

#include "Rtypes.h"
#include "Riostream.h"
#include <string>

namespace art {
template <int T0> class Hash;
template <> class Hash<3> {

public:
// Nested classes declaration.

public:
// Data Members.
   string      hash_;       //

   Hash();
   Hash(const Hash & );
   virtual ~Hash();

   ClassDef(Hash,11); // Generated by MakeProject.
};
} // namespace
#endif
