//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun  4 02:53:16 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file /pnfs/dune/scratch/users/tjyang/v08_21_00/reco/mcc12_protodune_beam_p1GeV_cosmics_12ms_test/19285494_84/mcc12_protodune_beam_p1GeV_cosmics_12ms_test_84_20190601T145951_reco0.root
//////////////////////////////////////////////////////////


#ifndef raw__OpDetWaveform_h
#define raw__OpDetWaveform_h
namespace raw {
class OpDetWaveform;
} // end of namespace.

#include "Rtypes.h"
#include "Riostream.h"
#include <vector>

namespace raw {
class OpDetWaveform : public vector<short> {

public:
// Nested classes declaration.

public:
// Data Members.
   unsigned int fChannel;    //
   double       fTimeStamp;    //

   OpDetWaveform();
   OpDetWaveform(const OpDetWaveform & );
   virtual ~OpDetWaveform();

   ClassDef(OpDetWaveform,14); // Generated by MakeProject.
};
} // namespace
#endif
