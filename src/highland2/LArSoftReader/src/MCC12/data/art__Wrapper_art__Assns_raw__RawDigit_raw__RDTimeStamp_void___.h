//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Mon Jun  3 14:12:49 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file /hep/DUNE/DataDir/ana_-043d807f-0b76-401e-9889-c1184b96a71c.root
//////////////////////////////////////////////////////////


#ifndef art__Wrapper_art__Assns_raw__RawDigit_raw__RDTimeStamp_void____h
#define art__Wrapper_art__Assns_raw__RawDigit_raw__RDTimeStamp_void____h
namespace raw {
#ifndef raw__RawDigit_h
#define raw__RawDigit_h
enum RawDigit { kDefault_RawDigit };
#endif
} // end of namespace.
namespace raw {
class RDTimeStamp;
} // end of namespace.
namespace art {
template <typename T0, typename T1, typename T2> class Assns;
template <> class Assns<raw::RawDigit,raw::RDTimeStamp,void>;
} // end of namespace.
namespace art {
template <typename T0> class Wrapper;
template <> class Wrapper<art::Assns<raw::RawDigit,raw::RDTimeStamp,void> >;
} // end of namespace.

#include "Rtypes.h"
#include "art__Assns_raw__RawDigit_raw__RDTimeStamp_void_.h"
#include "art__EDProduct.h"
namespace raw {
#ifndef raw__RawDigit_h
#define raw__RawDigit_h
enum RawDigit { kDefault_RawDigit };
#endif
} // end of namespace.
#include "raw__RDTimeStamp.h"

namespace art {
template <typename T0> class Wrapper;
template <> class Wrapper<art::Assns<raw::RawDigit,raw::RDTimeStamp,void> > : public art::EDProduct {

public:
// Nested classes declaration.

public:
// Data Members.
   bool        present;     //
   unsigned int rangeSetID;    //
   art::Assns<raw::RawDigit,raw::RDTimeStamp,void> obj;           //

   Wrapper();
   Wrapper(const Wrapper & );
   virtual ~Wrapper();

   ClassDef(Wrapper,12); // Generated by MakeProject.
};
} // namespace
#endif