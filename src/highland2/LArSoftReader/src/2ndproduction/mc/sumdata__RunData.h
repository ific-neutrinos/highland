//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 13 18:14:53 2020 by ROOT version 6.16/00)
//      from the StreamerInfo in file ../PDSPProd2_protoDUNE_sp_reco_35ms_sce_off_23473772_0_452d9f89-a2a1-4680-ab72-853a3261da5d.root
//////////////////////////////////////////////////////////


#ifndef sumdata__RunData_h
#define sumdata__RunData_h
namespace sumdata {
class RunData;
} // end of namespace.

#include "Rtypes.h"
#include "Riostream.h"
#include <string>

namespace sumdata {
class RunData {

public:
// Nested classes declaration.

public:
// Data Members.
   string      fDetName;    //Detector name.

   RunData();
   RunData(const RunData & );
   virtual ~RunData();

   ClassDef(RunData,14); // Generated by MakeProject.
};
} // namespace
#endif