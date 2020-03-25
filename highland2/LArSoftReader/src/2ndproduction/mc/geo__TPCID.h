//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 13 18:14:53 2020 by ROOT version 6.16/00)
//      from the StreamerInfo in file ../PDSPProd2_protoDUNE_sp_reco_35ms_sce_off_23473772_0_452d9f89-a2a1-4680-ab72-853a3261da5d.root
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
