//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun  4 02:53:16 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file /pnfs/dune/scratch/users/tjyang/v08_21_00/reco/mcc12_protodune_beam_p1GeV_cosmics_12ms_test/19285494_84/mcc12_protodune_beam_p1GeV_cosmics_12ms_test_84_20190601T145951_reco0.root
//////////////////////////////////////////////////////////


#ifndef art__ProcessConfiguration_h
#define art__ProcessConfiguration_h
namespace art {
class ProcessConfiguration;
} // end of namespace.

#include "Rtypes.h"
#include "Riostream.h"
#include <string>
#include "fhicl__ParameterSetID.h"

namespace art {
class ProcessConfiguration {

public:
// Nested classes declaration.

public:
// Data Members.
   string      processName_;    //
   fhicl::ParameterSetID parameterSetID_;    //
   string                releaseVersion_;    //

   ProcessConfiguration();
   ProcessConfiguration(const ProcessConfiguration & );
   virtual ~ProcessConfiguration();

   ClassDef(ProcessConfiguration,12); // Generated by MakeProject.
};
} // namespace
#endif
