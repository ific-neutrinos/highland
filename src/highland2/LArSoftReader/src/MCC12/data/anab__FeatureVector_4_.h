//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Mon Jun  3 14:12:49 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file /hep/DUNE/DataDir/ana_-043d807f-0b76-401e-9889-c1184b96a71c.root
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