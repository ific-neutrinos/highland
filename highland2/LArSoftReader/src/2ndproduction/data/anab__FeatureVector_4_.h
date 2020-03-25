//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 13 18:08:35 2020 by ROOT version 6.16/00)
//      from the StreamerInfo in file ../np04_raw_run005834_0126_dl7_reco_22481932_0_20190828T190321.root
//////////////////////////////////////////////////////////


#ifndef anab__FeatureVector_4__h
#define anab__FeatureVector_4__h
namespace anab {
template <int T0> class FeatureVector;
template <> class FeatureVector<4>;
} // end of namespace.

#include "Rtypes.h"

namespace anab {
template <int T0> class FeatureVector;
template <> class FeatureVector<4> {

public:
// Nested classes declaration.

public:
// Data Members.
   float       fData[4];    //Vector values

   FeatureVector();
   FeatureVector(const FeatureVector & );
   virtual ~FeatureVector();

   ClassDef(FeatureVector,11); // Generated by MakeProject.
};
} // namespace
#endif
