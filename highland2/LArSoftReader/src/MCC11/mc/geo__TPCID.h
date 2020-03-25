//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 14 10:40:59 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file /hep/DUNE/DataDir/MCC11/mcc11_protoDUNE_sp_reco_12231045_0_1ee4e6cf-25fb-482c-a231-fbd91e816aa4.root
//////////////////////////////////////////////////////////


#ifndef geo__TPCID_h
#define geo__TPCID_h
namespace geo {
class TPCID;
} // end of namespace.

#include "Rtypes.h"
#include "geo__CryostatID.h"

namespace geo {
class TPCID : public geo::CryostatID {

public:
// Nested classes declaration.

public:
// Data Members.
   unsigned int TPC;         //Index of the TPC within its cryostat.

   TPCID();
   TPCID(const TPCID & );
   virtual ~TPCID();

   ClassDef(TPCID,19); // Generated by MakeProject.
};
} // namespace
#endif
