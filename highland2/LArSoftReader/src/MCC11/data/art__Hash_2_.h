//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Sat Mar  9 10:19:31 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file ../../../protoDuneExampleAnalysis/v0r0/cmt/np04_raw_run005250_0014_dl9_reco_13061912_0_20181110T220718.root
//////////////////////////////////////////////////////////


#ifndef art__Hash_2__h
#define art__Hash_2__h
namespace art {
template <int T0> class Hash;
template <> class Hash<2>;
} // end of namespace.

#include "Rtypes.h"
#include "Riostream.h"
#include <string>

namespace art {
template <int T0> class Hash;
template <> class Hash<2> {

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
