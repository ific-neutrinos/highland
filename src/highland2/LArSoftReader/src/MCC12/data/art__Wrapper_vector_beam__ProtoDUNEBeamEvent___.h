//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Mon Jun  3 14:12:49 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file /hep/DUNE/DataDir/ana_-043d807f-0b76-401e-9889-c1184b96a71c.root
//////////////////////////////////////////////////////////


#ifndef art__Wrapper_vector_beam__ProtoDUNEBeamEvent____h
#define art__Wrapper_vector_beam__ProtoDUNEBeamEvent____h
#include <vector>
namespace std {} using namespace std;
namespace beam {
class ProtoDUNEBeamEvent;
} // end of namespace.
namespace art {
template <typename T0> class Wrapper;
template <> class Wrapper<vector<beam::ProtoDUNEBeamEvent> >;
} // end of namespace.

namespace std {} using namespace std;
#include "beam__ProtoDUNEBeamEvent.h"
#include "art__EDProduct.h"
#include "Riostream.h"

namespace art {
template <typename T0> class Wrapper;
template <> class Wrapper<vector<beam::ProtoDUNEBeamEvent> > : public art::EDProduct {

public:
// Nested classes declaration.

public:
// Data Members.
   bool        present;     //
   unsigned int rangeSetID;    //
   vector<beam::ProtoDUNEBeamEvent> obj;           // (beam::ProtoDUNEBeamEvent)

   Wrapper();
   Wrapper(const Wrapper & );
   virtual ~Wrapper();

   ClassDef(Wrapper,12); // Generated by MakeProject.
};
} // namespace
#endif