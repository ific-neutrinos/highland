//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 14 10:40:59 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file /hep/DUNE/DataDir/MCC11/mcc11_protoDUNE_sp_reco_12231045_0_1ee4e6cf-25fb-482c-a231-fbd91e816aa4.root
//////////////////////////////////////////////////////////


#ifndef sim__ProtoDUNEbeamsim_h
#define sim__ProtoDUNEbeamsim_h
namespace sim {
class ProtoDUNEbeamsim;
} // end of namespace.

#include "Rtypes.h"
#include "Riostream.h"
#include <vector>
#include "sim__ProtoDUNEBeamInstrument.h"

namespace sim {
class ProtoDUNEbeamsim {

public:
// Nested classes declaration.

public:
// Data Members.
   vector<sim::ProtoDUNEBeamInstrument> fAllInstruments;    //

   ProtoDUNEbeamsim();
   ProtoDUNEbeamsim(const ProtoDUNEbeamsim & );
   virtual ~ProtoDUNEbeamsim();

   ClassDef(ProtoDUNEbeamsim,14); // Generated by MakeProject.
};
} // namespace
#endif