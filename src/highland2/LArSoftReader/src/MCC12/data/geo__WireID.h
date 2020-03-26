//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Mon Jun  3 14:12:50 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file /hep/DUNE/DataDir/ana_-043d807f-0b76-401e-9889-c1184b96a71c.root
//////////////////////////////////////////////////////////


#ifndef geo__WireID_h
#define geo__WireID_h
namespace geo {
class WireID;
} // end of namespace.

#include "Rtypes.h"
#include "geo__PlaneID.h"

namespace geo {
class WireID : public geo::PlaneID {

public:
// Nested classes declaration.

public:
// Data Members.
   unsigned int Wire;        //Index of the wire within its plane.

   WireID();
   WireID(const WireID & );
   virtual ~WireID();

   ClassDef(WireID,13); // Generated by MakeProject.
};
} // namespace
#endif