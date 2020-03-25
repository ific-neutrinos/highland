//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 14 10:40:59 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file /hep/DUNE/DataDir/MCC11/mcc11_protoDUNE_sp_reco_12231045_0_1ee4e6cf-25fb-482c-a231-fbd91e816aa4.root
//////////////////////////////////////////////////////////


#ifndef art__Wrapper_vector_anab__T0____h
#define art__Wrapper_vector_anab__T0____h
#include <vector>
namespace std {} using namespace std;
namespace anab {
class T0;
} // end of namespace.
namespace art {
template <typename T0> class Wrapper;
template <> class Wrapper<vector<anab::T0> >;
} // end of namespace.

namespace std {} using namespace std;
#include "anab__T0.h"
#include "art__EDProduct.h"
#include "Riostream.h"

namespace art {
template <typename T0> class Wrapper;
template <> class Wrapper<vector<anab::T0> > : public art::EDProduct {

public:
// Nested classes declaration.

public:
// Data Members.
   bool        present;     //
   unsigned int rangeSetID;    //
   vector<anab::T0> obj;           // (anab::T0)

   Wrapper();
   Wrapper(const Wrapper & );
   virtual ~Wrapper();

   ClassDef(Wrapper,12); // Generated by MakeProject.
};
} // namespace
#endif
